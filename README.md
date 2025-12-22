# Libft

*This project has been created as part of the 42 curriculum by amelhach.*

## Table of Contents
- [Description](#description)
- [Project Goals](#project-goals)
- [Library Overview](#library-overview)
- [Functions List](#functions-list)
- [Function Categories](#function-categories)
- [How to Use libft](#how-to-use-libft)
- [File Structure](#file-structure)
- [Compilation & Installation](#compilation--installation)
- [Usage Examples](#usage-examples)
- [Memory Management & Safety](#memory-management--safety)
- [Edge Cases Handled](#edge-cases-handled)
- [Bonus Part (Linked Lists)](#bonus-part-linked-lists)
- [Technical Choices](#technical-choices)
- [Resources & AI Usage](#resources--ai-usage)
- [Author](#author)

## Description

**Libft** is a custom C library developed as part of the 42 school curriculum.
The goal of this project is to recreate a set of standard C library functions,
as well as additional utility functions, in order to gain a deep understanding
of low-level programming, memory management, and data structures.

This library is designed to be reused in future 42 projects such as
`ft_printf`, `get_next_line`, `push_swap`, and others.

---

## Project Goals

- Understand how standard C library functions work internally  
- Improve memory management skills (`malloc`, `free`)  
- Learn how to build and use a static library (`.a`)  
- Work with strings, memory, file descriptors, and linked lists  
- Follow strict coding rules (42 Norm)  

---

## Library Overview

The library contains three main parts:

1. **Libc functions reimplementation**
2. **Additional utility functions**
3. **Bonus part: linked list utilities**

The output of the project is a static library named:


---

## Detailed Library Content

###  Libc Functions

Reimplementation of common functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

---

###  Additional Functions

Utility functions not present in the standard library:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

###  Bonus Part — Linked List Functions

Functions for handling singly linked lists using the following structure:


typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

Bonus functions include:

*   ft\_lstnew
    
*   ft\_lstadd\_front
    
*   ft\_lstadd\_back
    
*   ft\_lstsize
    
*   ft\_lstlast
    
*   ft\_lstdelone
    
*   ft\_lstclear
    
*   ft\_lstiter
    
*   ft\_lstmap
    

File Structure
--------------

`   libft/  ├── ft_*.c  ├── ft_*_bonus.c  ├── libft.h  ├── Makefile  └── README.md   `

Instructions
------------

### Compilation

To compile the mandatory part of the library:

`   make   `

This command generates:

`   libft.a   `

### Bonus Compilation

To compile the library with bonus (linked list functions):

`   make bonus   `

### Makefile Rules

*   make → compile mandatory part
    
*   make bonus → compile mandatory + bonus
    
*   make clean → remove object files (.o)
    
*   make fclean → remove object files and libft.a
    
*   make re → recompile everything
    

Usage Example
-------------

Example of using **libft** in a program:
```
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello 42");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compilation:

`   cc main.c libft.a   `

Memory & Error Handling
-----------------------

*   All functions properly handle memory allocation failures
    
*   No memory leaks when used correctly
    
*   Defensive checks against NULL pointers where relevant
    
*   Overflow protection implemented in functions like ft\_atoi and ft\_calloc
    

Edge Cases Handled
------------------

*   Empty strings
    
*   NULL pointers
    
*   Zero-length allocations
    
*   Integer overflow and underflow
    
*   Overlapping memory regions (ft\_memmove)
    

Technical Choices
-----------------

*   Written in pure C (no external libraries)
    
*   Strict compliance with **42 Norm**
    
*   Clear separation between mandatory and bonus parts
    
*   Static library for easy reuse in other projects
    
*   Modular and reusable code design
    

Resources & AI Usage
--------------------

### References

*   [man malloc](https://man7.org/linux/man-pages/man3/free.3.html)
    
*   [man free](https://man7.org/linux/man-pages/man1/free.1.html)
    
*   [man write](https://man7.org/linux/man-pages/man2/write.2.html)
    
*   [man ar](https://stackoverflow.com/questions/9593286/creating-a-library-file-in-makefile-and-compiling-after-that)

*   [file discriptor](https://users.cs.jmu.edu/bernstdh/web/common/lectures/summary_unix_file-descriptors.php)
 
*   [GNU C Library Documentation](https://man7.org/linux/man-pages/man7/libc.7.html)
    
*   [42 Libft Subject PDF](https://cdn.intra.42.fr/pdf/pdf/190364/en.subject.pdf)
    

### AI Usage

AI tools were used **only for**:

*   Clarifying function behavior and edge cases
    
*   Improving README structure and explanations
    
*   Reviewing logic descriptions (not code generation)
    

All implementation, logic, and debugging were done manually.