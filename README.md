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

> To differentiate them from the original C functions, our implementations use the `ft_` prefix.

| List | Description | Link |
|---|---|---|
| ft_isalpha | Checks if a character is alphabetic. Return `0` or `1` | [Open](./ft_isalpha.c) |
| ft_isdigit | Checks if a character is a digit. Return `0` or `1` | [Open](./ft_isdigit.c) |
| ft_isalnum | Checks if a character is alphanumeric. Return `0` or `1` | [Open](./ft_isalnum.c) |
| ft_isascii | Checks if a character is a valid ASCII value. Return `0` or `1` | [Open](./ft_isascii.c) |
| ft_isprint | Checks if a character is printable. Return `0` or `1`  | [Open](./ft_isprint.c) |
| ft_strlen | Returns the length of a string. Return an integer | [Open](./ft_strlen.c) |
| ft_memset | Fills memory with a constant byte. Return an `void *` | [Open](./ft_memset.c) |
| ft_bzero | Sets a block of memory to zero. Return an `void *` | [Open](./ft_bzero.c) |

> Still under construction... wait for more :)

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
| Started the `libft` lists | `2026/06/15` |
| Last list completed | `N/A` |

---

## License

This repository follows the [42 Unlicense](./LICENSE).

Feel free to open issues, suggest improvements or send pull requests! ദ്ദി˙ ᴗ ˙ )