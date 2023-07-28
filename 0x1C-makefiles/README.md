# 0x1C. C - Makefiles

## Description

This project focuses on learning about make, Makefiles, rules, variables, and common Makefile usage. The goal is to create a Makefile that will help automate the compilation process and facilitate the building of the `school` executable.

## Learning Objectives

- Understand the concepts of make, Makefiles, rules, and variables.
- Learn when, why, and how to use Makefiles.
- Create rules for building executables and handling dependencies.
- Use variables to simplify the Makefile and make it more maintainable.
- Implement rules to clean up temporary files and the executable.
- Improve coding skills in C and understanding of the compilation process.

## Requirements

- Allowed editors: vi, vim, emacs
- Operating System: Ubuntu 20.04 LTS
- Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1

## Tasks

### 0. make -f 0-Makefile

- Description: Create the first Makefile.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`
  - The `all` rule should build the `school` executable.
  - Variables: None

### 1. make -f 1-Makefile

- Description: Create a Makefile with variables.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`
  - The `all` rule should build the `school` executable.
  - Variables: `CC`, `SRC`
  - `CC`: The compiler to be used
  - `SRC`: The .c files

### 2. make -f 2-Makefile

- Description: Create a more advanced Makefile with additional variables.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`
  - The `all` rule should build the `school` executable.
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: The compiler to be used
  - `SRC`: The .c files
  - `OBJ`: The .o files
  - `NAME`: The name of the executable

### 3. make -f 3-Makefile

- Description: Create a complete Makefile with additional rules.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - The `all` rule should build the `school` executable.
  - The `clean` rule should delete Emacs and Vim temporary files along with the executable.
  - The `oclean` rule should delete the object files.
  - The `fclean` rule should delete Emacs and Vim temporary files, the executable, and the object files.
  - The `re` rule should force recompilation of all source files.
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: The compiler to be used
  - `SRC`: The .c files
  - `OBJ`: The .o files
  - `NAME`: The name of the executable
  - `RM`: The program to delete files (use the `RM` command)

### 4. A complete Makefile

- Description: Create a more advanced Makefile with additional compiler flags.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`, `clean`, `fclean`, `re`
  - The `all` rule should build the `school` executable.
  - The `clean` rule should delete Emacs and Vim temporary files along with the executable.
  - The `fclean` rule should delete Emacs and Vim temporary files, the executable, and the object files.
  - The `re` rule should force recompilation of all source files.
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: The compiler to be used
  - `SRC`: The .c files
  - `OBJ`: The .o files
  - `NAME`: The name of the executable
  - `RM`: The program to delete files (use the `RM` command)
  - `CFLAGS`: Compiler flags (`-Wall -Werror -Wextra -pedantic`)

### 5. Island Perimeter

- Description: Create a Python function to calculate the perimeter of an island described in a grid.
- Requirements:
  - Function: `def island_perimeter(grid):`
  - `grid`: A list of lists of integers where 0 represents a water zone and 1 represents a land zone.
  - The function should return the perimeter of the island, and the grid is rectangular with width and height not exceeding 100.

### 6. make -f 100-Makefile

- Description: Create an advanced Makefile with additional rules and restrictions.
- Requirements:
  - Name of the executable: `school`
  - Rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - The `all` rule should build the `school` executable.
  - The `clean` rule should delete Emacs and Vim temporary files along with the executable.
  - The `oclean` rule should delete the object files.
  - The `fclean` rule should delete Emacs and Vim temporary files, the executable, and the object files.
  - The `re` rule should force recompilation of all source files.
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: The compiler to be used
  - `SRC`: The .c files
  - `OBJ`: The .o files
  - `NAME`: The name of the executable
  - `RM`: The program to delete files (use the `RM` command)
  - `CFLAGS`: Compiler flags (`-Wall -Werror -Wextra -pedantic`)
  - Additional Requirements:
    - Use `$(RM)` for cleaning up rules, but do not set the RM variable.
    - Use `$(CC)` at most once in the Makefile.
    - Use `$(RM)` at most twice in the Makefile.
    - Do not use the string `$(CFLAGS)` (compiler should still use the flags set in this variable).
    - Do not have an `$(OBJ)` rule or use the `%.o: %.c` rule.
    - The Makefile should work even if there is a file in the folder that has the same name as one of your rules.
    - The Makefile should not compile if the header file `m.h` is missing.

## Authors

- Julien Barbier
- Silas Mugambi

## License


This project is licensed under the [MIT License](https://choosealicense.com/licenses/mit/).
