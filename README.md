<h1 align="center">libft</h1>
<p align="center">
  <strong>Your very first own library</strong>
</p>
<p align="center">
  <i>This project has been created as part of the 42 curriculum by eroque-d</i>
</p>

## Description

`libft` is the first project of Milestone 0 in the 42 curriculum. Our goal here is to
recreate some standard C library functions from scratch. Quite challenging, huh?

### Functions

#### Libc functions

> To differentiate them from the original C functions, our implementations use the `ft_` prefix.

| List | Description | Link |
| --- | --- | --- |
| ft_isalpha | Checks if a character is alphabetic. Return `0` or `1` | [Open](./ft_isalpha.c) |
| ft_isdigit | Checks if a character is a digit. Return `0` or `1` | [Open](./ft_isdigit.c) |
| ft_isalnum | Checks if a character is alphanumeric. Return `0` or `1` | [Open](./ft_isalnum.c) |
| ft_isascii | Checks if a character is a valid ASCII value. Return `0` or `1` | [Open](./ft_isascii.c) |
| ft_isprint | Checks if a character is printable. Return `0` or `1` | [Open](./ft_isprint.c) |
| ft_strlen | Returns the length of a string. Return an `int` | [Open](./ft_strlen.c) |
| ft_memset | Fills memory with a constant byte. Return an `void *` | [Open](./ft_memset.c) |
| ft_bzero | Sets a block of memory to zero. Return an `void *` | [Open](./ft_bzero.c) |
| ft_memcpy | Copies a number of bytes from one memory region to another. Return an `void *` | [Open](./ft_memcpy.c) |
| ft_memmove | Copies a number of bytes from one memory region to another, but with overwrite protection. Return an `void *` | [Open](./ft_memmove.c) |
| ft_strlcpy | Copies a string to a buffer of known size and guarantees \0 if the buffer size is greater than 0. Return an `size_t` | [Open](./ft_strlcpy.c) |
| ft_strlcat | Appends string to a buffer of known size, guaranteeing NUL-termination. Return a `size_t` | [Open](./ft_strlcat.c) |
| ft_toupper | Converts a character to uppercase. Return an `int` | [Open](./ft_toupper.c) |
| ft_tolower | Converts a character to lowercase. Return an `int` | [Open](./ft_tolower.c) |
| ft_strchr | Search for a character within a string, searching from beginning to end. Return an `char *` | [Open](./ft_strchr.c) |
| ft_strrchr | Search for a character within a string, searching from end to beginning. Return an `char *` | [Open](./ft_strrchr.c) |
| ft_strncmp | Compares two strings and returns the difference between them in an unsigned char. Return an `int` | [Open](./ft_strncmp.c) |
| ft_memchr | Search for a character within a string and returns its memory address. Return an `void *` | [Open](./ft_memchr.c) |
| ft_memcmp | Compares two blocks of memory, byte by byte, up to a limit of `n` bytes. Return an `int` | [Open](./ft_memcmp.c) |
| ft_strnstr | Search for a smaller string within a larger string, with a limit of `n`. Return an `char *` | [Open](./ft_strnstr.c) |
| ft_atoi | "ascii to int", converts integer characters to an integer value. Return an `int` | [Open](./ft_atoi.c) |
| ft_calloc | Dynamically allocates `size` amounts in already cleared memory using [ft_bzero](./ft_bzero.c). Return an `void *` | [Open](./ft_calloc.c) |
| ft_strdup | Duplicates a string by allocating memory dynamically using malloc. Return a `char *` | [Open](./ft_strdup.c) |

#### Additional functions

| List | Description | Link |
| --- | --- | --- |
| ft_substr | Allocates and returns a substring from the string 's'. Return a `char *` | [Open](./ft_substr.c) |
| ft_strjoin | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. Return a `char *` | [Open](./ft_strjoin.c) |
| ft_strtrim | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end. Return a `char *` | [Open](./ft_strtrim.c) |
| ft_split | Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. Return a `char **` | [Open](./ft_split.c) |
| ft_itoa | Allocates and returns a string representing the integer received as an argument. Return a `char *` | [Open](./ft_itoa.c) |
| ft_strmapi | Applies the function 'f' to each character of the string 's' to create a new string. Return a `char *` | [Open](./ft_strmapi.c) |
| ft_striteri | Applies the function 'f' to each character of the string passed as argument, modifying the original string. Return `void` | [Open](./ft_striteri.c) |
| ft_putchar_fd | Outputs the character 'c' to the given file descriptor. Return `void` | [Open](./ft_putchar_fd.c) |
| ft_putstr_fd | Outputs the string 's' to the given file descriptor. Return `void` | [Open](./ft_putstr_fd.c) |
| ft_putendl_fd | Outputs the string 's' to the given file descriptor, followed by a newline. Return `void` | [Open](./ft_putendl_fd.c) |
| ft_putnbr_fd | Outputs the integer 'n' to the given file descriptor. Return `void` | [Open](./ft_putnbr_fd.c) |

#### Linked Lists functions

| List | Description | Link |
| --- | --- | --- |
| ft_lstnew | Allocates and returns a new node. The member 'content' is initialized with 'content'. Return a `t_list *` | [Open](./ft_lstnew.c) |
| ft_lstadd_front | Adds the node 'new' at the beginning of the list. Return `void` | [Open](././ft_lstadd_front.c) |
| ft_lstsize | Counts the number of nodes in a list. Return an `int` | [Open](./ft_lstsize.c) |
| ft_lstlast | Returns the last node of the list. Return a `t_list *` | [Open](./ft_lstlast.c) |
| ft_lstadd_back | Adds the node 'new' at the end of the list. Return `void` | [Open](./ft_lstadd_back.c) |
| ft_lstdelone | Takes as a parameter a node and frees the memory of the node’s content using 'del'. Return `void` | [Open](./ft_lstdelone.c) |
| ft_lstclear | Deletes and frees the given node and every successor of that node, using 'del' and free. Return `void` | [Open](./ft_lstclear.c) |
| ft_lstiter | Iterates the list and applies the function 'f' on the content of each node. Return `void` | [Open](./ft_lstiter.c) |
| ft_lstmap | Iterates a list and applies 'f' on the content of each node to create a new list. Return a `t_list *` | [Open](./ft_lstmap.c) |

## Instructions

How to compile and use the `libft` library in your projects, yeah!

To compile the library, run:

```bash
make
````

This will generate the `libft.a` static library file.

To use `libft` in your project, include the header file in your source code:

```c
#include "libft.h"
```

Then compile your project together with the library:

```bash
cc main.c libft.a -o program
```

If `libft.h` is located in another directory, use the `-I` flag:

```bash
cc main.c libft.a -I/path/to/libft -o program
```

## Resources

### Links

- [Geeks for Geeks](https://www.geeksforgeeks.org/c/): About C functions

### AI

AI was used in this project solely for the following purposes:
- Translating documentation.
- Clarifying questions about what a specific function is and how it works.

---

## Timeline

| Event | Date |
|---|---|
| Started the `libft` lists | `2026/05/15` |
| Last list completed | `2026/06/03` |

---

## License

This repository follows the [42 Unlicense](./LICENSE).

Feel free to open issues, suggest improvements or send pull requests! ദ്ദി˙ ᴗ ˙ )
