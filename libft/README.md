_This project has been created as part of the 42 curriculum by [Noureldin Abdelaal
/ nabdelaa]._

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The objective of this project is to create a custom C standard library containing a collection of essential general-purpose functions that can be reused in future 42 C projects.

By re-implementing standard C library (`libc`) functions as well as additional utility routines, this project builds a deep understanding of memory management, pointer manipulation, string operations, and basic data structures in C.

---

## Detailed Description of the Library

The library compiles into a static archive named `libft.a` and is divided into three primary categories:

### 1. Libc Re-implementations

Standard C library functions recreated according to their original `man` specifications:

- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String inspection & manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Character checks & conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Additional Utility Functions

Functions not present in the standard `libc` or modified to be particularly useful for future school assignments:

- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into a new dynamically allocated string.
- `ft_strtrim`: Trims specific leading and trailing characters from a string.
- `ft_split`: Splits a string into an array of substrings using a delimiter character.
- `ft_itoa`: Converts an integer into a null-terminated string.
- `ft_strmapi` & `ft_striteri`: Apply functions to each character of a string by index.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Write characters, strings, or numbers directly to a designated file descriptor.

### 3. Linked List Functions

A set of functions designed to manipulate singly linked lists using the `t_list` structure:

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## Instructions

### Compilation

The project includes a `Makefile` with standard rules. Run one of the following commands in the root directory:

- Compile the mandatory functions into `libft.a`:
  ```bash
  make
  ```
- Remove object files (`.o`):
  ```bash
  make clean
  ```
- Remove object files and the compiled archive (`libft.a`):
  ```bash
  make fclean
  ```
- Clean and rebuild everything:
  ```bash
  make re
  ```

### Usage

To use `libft.a` in your own project:

1. Include the header file in your C source files:

   ```c
   #include "libft.h"
   ```

2. Compile your program by linking the static library:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

---

## Resources

### Ai Usage

Use it to help with write the README file and also help with finding resources and information.
"README.md" 96L, 3517B written 

### References & Documentation

- [Linux Man Pages](https://man7.org/linux/man-pages/) – Referenced standard behavior for `libc` functions (`man 3 malloc`, `man 3 string`, etc.).
- [GNU C Library Reference Manual](https://www.gnu.org/software/libc/manual/) – Clarifications on edge cases, memory boundaries, and standard behavior.
- [42 Norm V4 / Norminette Rules](https://github.com/42School/norminette) – Coding standards compliance.
