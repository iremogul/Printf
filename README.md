*This project has been created as part of the 42 curriculum.*

# ft_printf

## Description
The `ft_printf` project is about recoding the famous `printf` function from the C standard library (libc). This project introduces the concept of variadic functions in C and teaches how to format and handle variable numbers of arguments.

Upon successful completion, this project generates a static library named `libftprintf.a` that can be used in future projects as a reliable output formatting tool.

---

## Features and Supported Formats
The fundamental behavior of the original `printf` function has been duplicated, excluding buffer management. According to the mandatory requirements, `ft_printf` supports the following format specifiers:

* `%c` : Prints a single character.
* `%s` : Prints a string (as defined by the common C convention).
* `%p` : The `void *` pointer argument has to be printed in hexadecimal format.
* `%d` : Prints a decimal (base 10) number.
* `%i` : Prints an integer in base 10.
* `%u` : Prints an unsigned decimal (base 10) number.
* `%x` : Prints a number in hexadecimal (base 16) lowercase format.
* `%X` : Prints a number in hexadecimal (base 16) uppercase format.
* `%%` : Prints a percent sign.

**Additional Rules:**
* The function prototype is: `int ft_printf(const char *, ...);`
* Just like the original `printf`, it returns the total number of characters printed to the standard output.
* Variadic arguments are managed using the macros `va_start`, `va_arg`, `va_copy`, and `va_end` from the `<stdarg.h>` library.

---

## Instructions

### Compilation
Navigate to the root directory of the project in your terminal and run the following command:
make

This command compiles the source files and creates the static library `libftprintf.a`. You can use `make clean`, `make fclean`, and `make re` for standard cleanup operations.

### Usage
To use this library in your own projects:
1. Include the header file in your C code:
   `#include "ft_printf.h"`
2. Compile your project by linking the library:
   gcc main.c -L. -lftprintf

---

## Resources & AI Usage
* **Core References:** C variadic arguments (`stdarg.h`) documentation, base conversion algorithms, and the original `printf` manual pages.
* **AI Usage:** Throughout the development process, AI tools were utilized as a guide to grasp the underlying mechanics of the `<stdarg.h>` library (`va_list`) and to discuss type casting rules when converting pointer addresses to hexadecimal formats. No code blocks were directly copy-pasted into the project; all helper functions were written, structured, and tested manually in conjunction with peer learning and peer reviews.
