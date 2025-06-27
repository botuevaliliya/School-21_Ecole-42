# School 21 / Ecole 42 Projects – by hsilk

This repository contains selected C programming projects completed during my time at [School 21](https://21-school.ru/) (part of the international [42 Network](https://42.fr/en/homepage/)). The projects were designed to teach strong foundations in low-level programming, algorithmic thinking, and working in a UNIX environment with strict coding standards.

---

## Repository Structure

- [`piscine`](./piscine) — Core bootcamp exercises covering C basics, conditions, loops, arrays, pointers, recursion, file I/O, and more.
- [`libft`](./libft) — A custom C library of standard functions, recreated from scratch (like `ft_strlen`, `ft_strdup`, `ft_memcpy`, etc.), and extended with additional utilities.
- [`get_next_line`](./get_next_line) — A function that reads a file line-by-line, handling buffer management and dynamic memory safely. Implements `get_next_line(int fd)`.

---

## About the Projects

### 🏊 Piscine
An intensive 4-week bootcamp focused on C programming, shell scripting, and basic UNIX tools. I ranked in the **top 30 out of over 500 students** in my cohort. This section includes:
- Basic C syntax & logic
- Recursive functions
- Memory management
- Mini-projects (e.g., writing a calculator, manipulating strings)

### Libft
One of the first major projects. The goal was to rebuild standard library functions using only allowed C functions, while respecting the 42 coding style and testing rigorously.

Includes:
- Reimplementation of standard functions (`strlen`, `strcpy`, `memset`, etc.)
- Memory functions (`calloc`, `realloc`)
- Bonus: Linked list utility functions

### get_next_line
This project teaches robust file reading, dynamic memory handling, and buffer management. The function reads from a file descriptor until a newline or EOF is reached — returning each line one by one, efficiently.

- Handles multiple file descriptors
- Avoids memory leaks
- Custom buffer size

---

## Technologies Used

- Language: **C**
- Environment: **Unix/Linux**, **GCC**, **Makefiles**
- Tools: `vim`, `norminette`, `valgrind`

---

## What I Learned

- Writing C from scratch without helper libraries
- Implementing clean memory-safe code
- Working with pointers and manual memory management
- Handling multiple file descriptors and dynamic strings
- Following strict code formatting standards (`norminette`)

---

My School 21 username: `hsilK`

