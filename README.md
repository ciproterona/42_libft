<p align="center">
  <i>This project has been created as part of the 42 curriculum by eroque-d</i>
</p>
<h1 align="center">libft</h1>
<p align="center">
  <strong>Your very first own library (now with ft_printf & GNL)</strong>
</p>

## Description

`libft` is the first project of Milestone 0 in the 42 curriculum. Originally designed to recreate some standard C library functions from scratch, this repository has been upgraded into a monolithic utility library. It now fully integrates two other 42 projects: `ft_printf` and `get_next_line`, becoming the ultimate toolkit for upcoming projects like `push_swap`.

### Functions

#### Libc functions

> To differentiate them from the original C functions, our implementations use the `ft_` prefix.

| List | Description | Link |
| --- | --- | --- |
| ft_isalpha | Checks if a character is alphabetic. Return `0` or `1` | [Open](./src/lib/ft_isalpha.c) |
| ft_isdigit | Checks if a character is a digit. Return `0` or `1` | [Open](./src/lib/ft_isdigit.c) |
| ft_isalnum | Checks if a character is alphanumeric. Return `0` or `1` | [Open](./src/lib/ft_isalnum.c) |
| ft_isascii | Checks if a character is a valid ASCII value. Return `0` or `1` | [Open](./src/lib/ft_isascii.c) |
| ft_isprint | Checks if a character is printable. Return `0` or `1` | [Open](./src/lib/ft_isprint.c) |
| ft_strlen | Returns the length of a string. Return an `int` | [Open](./src/lib/ft_strlen.c) |
| ft_memset | Fills memory with a constant byte. Return an `void *` | [Open](./src/lib/ft_memset.c) |
| ft_bzero | Sets a block of memory to zero. Return an `void *` | [Open](./src/lib/ft_bzero.c) |
| ft_memcpy | Copies a number of bytes from one memory region to another. Return an `void *` | [Open](./src/lib/ft_memcpy.c) |
| ft_memmove | Copies a number of bytes from one memory region to another, but with overwrite protection. Return an `void *` | [Open](./src/lib/ft_memmove.c) |
| ft_strlcpy | Copies a string to a buffer of known size and guarantees \0 if the buffer size is greater than 0. Return an `size_t` | [Open](./src/lib/ft_strlcpy.c) |
| ft_strlcat | Appends string to a buffer of known size, guaranteeing NUL-termination. Return a `size_t` | [Open](./src/lib/ft_strlcat.c) |
| ft_toupper | Converts a character to uppercase. Return an `int` | [Open](./src/lib/ft_toupper.c) |
| ft_tolower | Converts a character to lowercase. Return an `int` | [Open](./src/lib/ft_tolower.c) |
| ft_strchr | Search for a character within a string, searching from beginning to end. Return an `char *` | [Open](./src/lib/ft_strchr.c) |
| ft_strrchr | Search for a character within a string, searching from end to beginning. Return an `char *` | [Open](./src/lib/ft_strrchr.c) |
| ft_strncmp | Compares two strings and returns the difference between them in an unsigned char. Return an `int` | [Open](./src/lib/ft_strncmp.c) |
| ft_memchr | Search for a character within a string and returns its memory address. Return an `void *` | [Open](./src/lib/ft_memchr.c) |
| ft_memcmp | Compares two blocks of memory, byte by byte, up to a limit of `n` bytes. Return an `int` | [Open](./src/lib/ft_memcmp.c) |
| ft_strnstr | Search for a smaller string within a larger string, with a limit of `n`. Return an `char *` | [Open](./src/lib/ft_strnstr.c) |
| ft_atoi | "ascii to int", converts integer characters to an integer value. Return an `int` | [Open](./src/lib/ft_atoi.c) |
| ft_calloc | Dynamically allocates `size` amounts in already cleared memory. Return an `void *` | [Open](./src/lib/ft_calloc.c) |
| ft_strdup | Duplicates a string by allocating memory dynamically using malloc. Return a `char *` | [Open](./src/lib/ft_strdup.c) |

#### Additional functions

| List | Description | Link |
| --- | --- | --- |
| ft_substr | Allocates and returns a substring from the string 's'. Return a `char *` | [Open](./src/lib/ft_substr.c) |
| ft_strjoin | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. Return a `char *` | [Open](./src/lib/ft_strjoin.c) |
| ft_strtrim | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end. Return a `char *` | [Open](./src/lib/ft_strtrim.c) |
| ft_split | Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. Return a `char **` | [Open](./src/lib/ft_split.c) |
| ft_itoa | Allocates and returns a string representing the integer received as an argument. Return a `char *` | [Open](./src/lib/ft_itoa.c) |
| ft_strmapi | Applies the function 'f' to each character of the string 's' to create a new string. Return a `char *` | [Open](./src/lib/ft_strmapi.c) |
| ft_striteri | Applies the function 'f' to each character of the string passed as argument, modifying the original string. Return `void` | [Open](./src/lib/ft_striteri.c) |
| ft_putchar_fd | Outputs the character 'c' to the given file descriptor. Return `void` | [Open](./src/lib/ft_putchar_fd.c) |
| ft_putstr_fd | Outputs the string 's' to the given file descriptor. Return `void` | [Open](./src/lib/ft_putstr_fd.c) |
| ft_putendl_fd | Outputs the string 's' to the given file descriptor, followed by a newline. Return `void` | [Open](./src/lib/ft_putendl_fd.c) |
| ft_putnbr_fd | Outputs the integer 'n' to the given file descriptor. Return `void` | [Open](./src/lib/ft_putnbr_fd.c) |

#### Linked Lists functions

| List | Description | Link |
| --- | --- | --- |
| ft_lstnew | Allocates and returns a new node. The member 'content' is initialized with 'content'. Return a `t_list *` | [Open](./src/lib/ft_lstnew.c) |
| ft_lstadd_front | Adds the node 'new' at the beginning of the list. Return `void` | [Open](./src/lib/ft_lstadd_front.c) |
| ft_lstsize | Counts the number of nodes in a list. Return an `int` | [Open](./src/lib/ft_lstsize.c) |
| ft_lstlast | Returns the last node of the list. Return a `t_list *` | [Open](./src/lib/ft_lstlast.c) |
| ft_lstadd_back | Adds the node 'new' at the end of the list. Return `void` | [Open](./src/lib/ft_lstadd_back.c) |
| ft_lstdelone | Takes as a parameter a node and frees the memory of the node’s content using 'del'. Return `void` | [Open](./src/lib/ft_lstdelone.c) |
| ft_lstclear | Deletes and frees the given node and every successor of that node, using 'del' and free. Return `void` | [Open](./src/lib/ft_lstclear.c) |
| ft_lstiter | Iterates the list and applies the function 'f' on the content of each node. Return `void` | [Open](./src/lib/ft_lstiter.c) |
| ft_lstmap | Iterates a list and applies 'f' on the content of each node to create a new list. Return a `t_list *` | [Open](./src/lib/ft_lstmap.c) |

#### ft_printf

Our implementation of the standard `printf` function, handling formatted output for multiple data types (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`).

| List | Description | Link |
| --- | --- | --- |
| ft_printf | Main function that handles format string parsing. | [Open](./src/ft_printf/ft_printf.c) |
| ft_print_char | Handles character and string specifiers (`%c`, `%s`, `%%`). | [Open](./src/ft_printf/ft_print_char.c) |
| ft_print_ints | Handles signed and unsigned integer specifiers (`%d`, `%i`, `%u`). | [Open](./src/ft_printf/ft_print_ints.c) |
| ft_print_hex | Handles hexadecimal and pointer address specifiers (`%x`, `%X`, `%p`). | [Open](./src/ft_printf/ft_print_hex.c) |
| ft_print_utils | Internal helpers and base conversion utilities. | [Open](./src/ft_printf/ft_print_utils.c) |

#### Get_Next_Line

An advanced input-reading function that returns a line read from a file descriptor, handling dynamic memory buffer sizes and multiple file descriptors seamlessly (bonus part included).

| List | Description | Link |
| --- | --- | --- |
| get_next_line | Main loop that coordinates reading from file descriptors. | [Open](./src/gnl/get_next_line.c) |
| get_next_line_utils | Auxiliary string and memory manipulation tools for GNL. | [Open](./src/gnl/get_next_line_utils.c) |
| get_next_line_bonus | Multi-fd support version for reading from various files concurrently. | [Open](./src/gnl/get_next_line_bonus.c) |

---

## Instructions

How to compile and use the monolithic `libft` library in your projects, yeah!

### Compilation

To compile the entire library (including all subsystems), navigate to the root directory and run:

```bash
make
```

This will automatically check dependencies and generate a single static archive file called `libft.a`.

### Project Integration

To use `libft`, `ft_printf`, or `get_next_line` in your C source files, simply include the main header file:

```c
#include "libft.h"
```

When compiling your project, you must pass the path to the library's include directory using the `-I` flag, so the compiler can find `libft.h`, `ft_printf.h`, and `get_next_line.h`:

```bash
cc main.c -I./path/to/libft/includes ./path/to/libft/libft.a -o program
```

---

## Resources

### Links

* [Geeks for Geeks](https://www.geeksforgeeks.org/c/): About C functions

### AI

AI was used in this project solely for the following purposes:

* Translating documentation.
* Clarifying questions about what a specific function is and how it works.
* Fixing Makefile wildcards and restructuring file paths for modular subsystems.

---

## Timeline

| Event | Date |
| --- | --- |
| Started the `libft` lists | `2026/05/15` |
| Last list completed | `2026/06/03` |
| Restructured into modules (ft_printf & GNL integration) | `2026/07/02` |

---

## License

This repository follows the [42 Unlicense](./LICENSE).

Feel free to open issues, suggest improvements or send pull requests! ദ്ദി˙ ᴗ ˙ )
