# Libft - @42Born2Code
My implementation of some of the Standard C Library functions including some additional ones.

## What is Libft ?

Libft is an individual project at [19](https://www.s19.be/)/[42](https://www.42.fr/) that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

## What's in it ?

**1. Libc Functions:** Some of the standard C functions
**2. Additional functions:** Functions 42 deems will be useful for later projects
**3. Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
**4. Personal Functions:** Functions I believe will be useful later.

| **Libc functions**  | **Additional functions**  | **Bonus functions** |
| --- | --- | --- |
| memset  |  substr | ft_lstnew |
| bzero | strjoin | ft_lstadd_front |
| memcpy  | strtrim | ft_lstsize  |
| memccpy |split  | ft_lstlast  |
| memmove | itoa  | ft_lstadd_back  |
| memchr |  strmapi |  ft_lstdelone  |
| strlen  | ft_putchar_fd | ft_lstclear |
| strlcpy  | ft_putstr_fd |  --- |
| strlcat | ft_putendl_fd | --- |
| strchr |  ft_putnbr_fd  | --- |
| strrchr | --- | --- |
| strnstr | --- | --- |
| strncmp | --- | --- |
| atoi  | --- | --- |
| isalpha  | --- | --- |
| isdigit | --- | --- |
| isalnum  | --- | --- |
| isascii | --- | --- |
| isprint  | --- | --- |
| toupper | --- | --- |
| tolower  | --- | --- |


## How does it work ?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, cd into the project, copy all the files from the sub folders to the root directory and finally, call make:
```
git clone https://github.com/te-mbu/libft.git
cd libft
make
```
You should see a libft.a file and some object files (.o).

Now to clean up (removing the .o files and the .c files from the root), call ```make clean```
