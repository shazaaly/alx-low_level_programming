# 0x1C. C - Makefiles

This repository contains solutions to the tasks related to Makefiles for the project 0x1C. C - Makefiles, as part of the ALX low-level programming curriculum.

## Table of Contents

- [0x1C. C - Makefiles](#0x1c-c---makefiles)
	- [Table of Contents](#table-of-contents)
	- [General Info](#general-info)
	- [Learning Objectives](#learning-objectives)
	- [Requirements](#requirements)
		- [General](#general)
	- [Tasks](#tasks)
	- [Usage](#usage)
	- [Copyright](#copyright)

## General Info

- **Author:** Julien Barbier
- **Weight:** 1

## Learning Objectives

By completing this project, you will be able to:

- Understand what make and Makefiles are.
- Know when, why, and how to use Makefiles.
- Define rules and understand how to set and use them.
- Differentiate between explicit and implicit rules.
- Implement common and useful rules.
- Use variables and understand their purpose.

## Requirements

### General

- Allowed Editors: vi, vim, emacs
- Operating System: Ubuntu 20.04 LTS
- Version of GCC: 9.3.0
- Version of Make: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file at the root of the folder is mandatory

## Tasks

This repository contains solutions to the following tasks:

1. [Create your first Makefile](./0-Makefile): Create a Makefile to build an executable named `school`.
2. [A simple Makefile](./1-Makefile): Create a Makefile with variables `CC` and `SRC` to build an executable named `school`.
3. [Recompile only if necessary](./2-Makefile): Improve the Makefile to recompile only updated source files.
4. [A complete Makefile](./3-Makefile): Create a more complete Makefile with additional rules (`clean`, `oclean`, `fclean`, `re`) and a `CFLAGS` variable for compiler flags.
5. [Island Perimeter](./5-island_perimeter.py): Implement a Python function `island_perimeter` to calculate the perimeter of an island described in a grid.

## Usage

To use the Makefiles provided in this repository, navigate to the task directory and run the `make` command with the corresponding Makefile:

```bash
make -f <Makefile_name>
```

For example, to compile the first task:

```bash
make -f 0-Makefile
```

For task 5, you can run the Python script `5-main.py`:

```bash
./5-main.py
```

## Copyright

© 2023 ALX - All rights reserved. This project is for educational purposes only. Plagiarism is strictly forbidden and can result in removal from the program.
