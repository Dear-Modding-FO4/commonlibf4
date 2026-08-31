import argparse
import os
import pathlib
import sys

TARGETS = [
	("F4SE", "F4SE.h", {"Impl"}),
	("RE", "Fallout.h", {"BSCoreTypes.h", "IDs.h", "IDs_NiRTTI.h", "IDs_RTTI.h", "IDs_VTABLE.h"}),
	("Scaleform", "Scaleform.h", set()),
]

def render_header(a_directory, a_filename, a_exclude):
	exclude = set(a_exclude)
	exclude.add(a_filename)

	lines = ["#pragma once", "", '#include "F4SE/Impl/PCH.h"', ""]

	tmp = []
	for dirpath, dirnames, filenames in os.walk(a_directory):
		rem = []
		for dirname in dirnames:
			if dirname in exclude:
				rem.append(dirname)
		for todo in rem:
			dirnames.remove(todo)

		for filename in filenames:
			if filename not in exclude and filename.endswith((".h", ".hpp", ".hxx")):
				path = os.path.join(dirpath, filename)
				tmp.append(os.path.normpath(path))

	files = []
	for file in tmp:
		files.append(file.replace("\\", "/"))

	files.sort()
	for file in files:
		lines.append('#include "' + file + '"')

	return "\n".join(lines) + "\n"

def make_header(a_directory, a_filename, a_exclude):
	content = render_header(a_directory, a_filename, a_exclude)
	with open(a_directory + "/" + a_filename, "w", encoding="utf-8") as out:
		out.write(content)

def check_header(a_directory, a_filename, a_exclude):
	expected = render_header(a_directory, a_filename, a_exclude)
	path = a_directory + "/" + a_filename

	try:
		with open(path, "r", encoding="utf-8") as f:
			actual = f.read()
	except FileNotFoundError:
		actual = None

	if actual != expected:
		print("stale: " + os.path.normpath(path).replace("\\", "/"))
		return False
	return True

def main():
	parser = argparse.ArgumentParser()
	parser.add_argument("--check", action="store_true", help="verify the umbrella headers are up to date without writing them")
	args = parser.parse_args()

	root = pathlib.Path(os.path.dirname(os.path.realpath(__file__))).parent.parent
	os.chdir(os.path.join(root, "include"))

	if args.check:
		stale = False
		for directory, filename, exclude in TARGETS:
			if not check_header(directory, filename, exclude):
				stale = True
		if stale:
			sys.exit(1)
	else:
		for directory, filename, exclude in TARGETS:
			make_header(directory, filename, exclude)

if __name__ == "__main__":
	main()
