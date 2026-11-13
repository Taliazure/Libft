*This project has been created as part of the 42 curriculum by antvidal.*

# Libft

![42 School](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white)
![Norm](https://img.shields.io/badge/norminette-passing-success?style=flat-square)
![Flags](https://img.shields.io/badge/flags-Wall%20%7C%20Wextra%20%7C%20Werror-critical?style=flat-square)

> My own C standard library, rebuilt as per the assigment, function by function, with no external dependencies beyond the allowed: `write`, `malloc` and `free`.

---

## Table of contents

- [Description](#description)
- [What's inside](#whats-inside)
- [Building](#building)
- [Using it in a project](#using-it-in-a-project)
- [Function reference](#function-reference)
- [What I took away from it](#what-i-took-away-from-it)
- [Resources](#resources)

---

## Description

Libft teaches how memory, pointers and strings really work in C. Every function follows the behavior of its libc original (as described in the man pages) or the project subject, only the name changes. Everything is written to the 42 Norm and compiled with `-Wall -Wextra -Werror`.

`libft` is the first project of the 42 Lisbon curriculum and the foundation that later projects are built on. The goal is simple to state: reimplement a slice of the C standard library yourself, so that you understand what actually happens behind `strlen`, `memmove` or `malloc` instead of trusting them blindly.

The library has three parts: the **libc functions** reimplemented with an `ft_` prefix, a set of **additional utilities** (string manipulation and output), and a small **linked-list API**.

## What's inside

```
libft/
├── Makefile          # builds libft.a
├── libft.h           # single public header (prototypes + t_list)
├── ft_is*.c  ft_to*.c    # character classification & conversion
├── ft_mem*.c  ft_bzero.c # raw memory manipulation
├── ft_str*.c  ft_atoi.c  # string manipulation
├── ft_put*_fd.c          # file-descriptor output
├── ft_itoa.c  ft_split.c # additional utilities
└── ft_lst*.c             # singly linked list
```

## Building

```bash
make          # builds libft.a at the root of the repository
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

The library is assembled with `ar`, and every file compiles under `-Wall -Wextra -Werror`.

## Using it in a project

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello 42 world", ' ');

    ft_putendl_fd(words[0], 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o demo
```

`-L.` tells the compiler to look for libraries in the current directory, `-lft` links `libft.a`, and `-I.` lets it find `libft.h`.

## Function reference

### Part 1 - libc reimplementations

Same behavior as the originals; see their man pages (`man 3 <name>`).

**Character checks** (return `1` if the character matches, `0` otherwise)

| Function | What it does |
| --- | --- |
| `ft_isalpha` | Checks if the character is a letter (`a-z`, `A-Z`). |
| `ft_isdigit` | Checks if the character is a digit (`0-9`). |
| `ft_isalnum` | Checks if the character is a letter or a digit. |
| `ft_isascii` | Checks if the value fits in the ASCII table (`0-127`). |
| `ft_isprint` | Checks if the character is printable (`32-126`). |

**Character conversion**

| Function | What it does |
| --- | --- |
| `ft_toupper` | Converts a lowercase letter to uppercase; leaves everything else unchanged. |
| `ft_tolower` | Converts an uppercase letter to lowercase; leaves everything else unchanged. |

**Strings**

| Function | What it does |
| --- | --- |
| `ft_strlen` | Returns the length of a string, not counting the `'\0'`. |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always `'\0'`-terminating it; returns the length of the source. |
| `ft_strlcat` | Appends a string to another within a given buffer size; returns the length it tried to create. |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string (or `NULL`). |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string (or `NULL`). |
| `ft_strncmp` | Compares up to `n` characters of two strings. |
| `ft_strnstr` | Finds the first occurrence of a substring within the first `len` characters of a string. |
| `ft_atoi` | Converts the number at the start of a string to an `int` (skips whitespace, handles `+`/`-`). |

**Memory**

| Function | What it does |
| --- | --- |
| `ft_memset` | Fills the first `n` bytes of a memory area with a given byte. |
| `ft_bzero` | Sets the first `n` bytes of a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another (areas must not overlap). |
| `ft_memmove` | Copies `n` bytes between memory areas, handling overlap correctly. |
| `ft_memchr` | Looks for a byte in the first `n` bytes of a memory area. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |

**Allocating helpers**

| Function | What it does |
| --- | --- |
| `ft_calloc` | Allocates memory for `nmemb` elements of `size` bytes and fills it with zeros. |
| `ft_strdup` | Returns a newly allocated copy of a string. |

### Part 2 - additional utilities

| Function | What it does |
| --- | --- |
| `ft_substr` | Allocates and returns a substring of `s`, starting at index `start`, with a maximum length `len`. |
| `ft_strjoin` | Allocates and returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with the characters from `set` removed from both ends. |
| `ft_split` | Allocates and returns a `NULL`-terminated array of strings obtained by splitting `s` with the delimiter `c`. The caller frees each string and then the array. |
| `ft_itoa` | Allocates and returns a string representing an integer, negative numbers and `INT_MIN` included. |
| `ft_strmapi` | Applies `f(index, char)` to each character of `s` and returns a new string with the results. |
| `ft_striteri` | Applies `f(index, char *)` to each character of `s`, modifying the string in place. |
| `ft_putchar_fd` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to the given file descriptor. |

### Part 3 - linked lists

Built around a deliberately minimal node:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

```
head ──► [content|next] ──► [content|next] ──► [content|next] ──► NULL
```

| Function | What it does |
| --- | --- |
| `ft_lstnew` | Allocates a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. Takes a `t_list **` because the head itself changes. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then frees the node (not the next ones). |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list from the results of a function applied to each node's content; uses `del` to clean up if an allocation fails. |

---

## What I took away from it

- Manual memory management without a safety net: every `malloc` has an owner, and every error path frees what it allocated.
- Pointers and `void *` as the real interface of C, including why some functions take a pointer to a pointer (`ft_lstadd_front`, `ft_lstclear`).
- Function pointers (`ft_strmapi`, `ft_lstiter`, `ft_lstmap`) as a way to pass behavior into a function.
- Writing to the 42 Norm (no `for`, 25 lines and 5 variables per function), which forces you to break a problem into small helpers that each do one thing.
- How a static library is assembled with `ar` and linked with `-L` and `-l`.

## Resources

- Manual pages: `man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`, `man 3 calloc`, etc.
- *The C Programming Language*, Brian W. Kernighan and Dennis M. Ritchie.
- Beej's Guide to C Programming.
- The GNU C Library manual.
- The 42 Norm (official PDF).

### Use of AI

I used an AI assistant (Claude) as a study helper, not to write the library for me. It was used for:

- Explaining concepts: how `ft_itoa` works, what `ft_strmapi` and function pointers do, and why `ft_lstadd_front` takes a `t_list **` (with memory-address diagrams).
- Helping me draft this README.

I tested and understood all the code before submitting it.

---

**Author**: antvidal ([intra profile](https://profile.intra.42.fr/users/antvidal))