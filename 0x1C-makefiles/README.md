# 0x1C. C - Makefiles 👷‍♂️

This repository contains my solutions to the Makefiles tasks for the project **0x1C. C - Makefiles**, as part of the ALX low-level programming curriculum.

## 📚 Learning Objectives

By completing this project, you will achieve the ability to:

- Understand the concepts of make and Makefiles.
- Determine when, why, and how to use Makefiles.
- Define rules and comprehend how to set and utilize them.
- Differentiate between explicit and implicit rules.
- Implement common and useful rules for efficient compilation.
- Utilize variables to enhance the flexibility of your Makefiles.

## 📋 Requirements

- **Allowed Editors:** vi, vim, emacs
- **Operating System:** Ubuntu 20.04 LTS
- **Version of GCC:** 9.3.0
- **Version of Make:** GNU Make 4.2.1
- All your files should end with a new line.
- A well-structured `README.md` file at the root of the project folder is mandatory to explain the contents.

## 📂 Project Structure

The repository is organized as follows:

- Each task has its own directory with a corresponding Makefile.
- Python scripts have a `.py` extension and are located in their respective task directories.

## 🚀 Tasks

This repository contains solutions for the following tasks:

1. [Create your first Makefile](./0-Makefile): Introduction to Makefiles by creating one to build an executable named `school`.
2. [A simple Makefile](./1-Makefile): Enhanced Makefile with variables `CC` and `SRC` to build the `school` executable.
3. [Recompile only if necessary](./2-Makefile): Makefile that recompiles only updated source files.
4. [A complete Makefile](./3-Makefile): Comprehensive Makefile with additional rules (`clean`, `oclean`, `fclean`, `re`) and a `CFLAGS` variable for compiler flags.
5. [Island Perimeter](./5-island_perimeter.py): Implementation of a Python function `island_perimeter` to calculate the perimeter of an island described in a grid.

## 📝 Usage

Navigate to the directory of the specific task and execute the `make` command with the appropriate Makefile:

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

## ©️ Copyright and Plagiarism

⚠️ **IMPORTANT:** This project is for educational purposes only. Any form of plagiarism is strictly forbidden. Respect the academic integrity and do not copy the solutions.
