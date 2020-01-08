#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

typedef unsigned long	size_t;

size_t		ft_strlen(const char *s);
int         ft_isalpha(int c);
int         ft_isdigit(int c);
int         ft_isalnum(int c);
int         ft_isascii(int c);
int         ft_isprint(int c);
int         ft_toupper(int c);
int         ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int         ft_strncmp(char *s1, char *s2, size_t n);
size_t      ft_strlcpy(char *dst, const char *src, size_t size);
size_t      ft_strlcat(char *dst, const char *src, size_t size);
int         ft_atoi(const char *str);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char        *ft_strdup(const char *src);
char        *ft_strjoin(char const *s1, char const *s2);
char		**ft_split(const char *s, char c);
char        *ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
char		*ft_strtrim(char const *s1, char const *set);
void		*ft_memset(void *b, int c, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);


void        ft_putchar(char c);
void        ft_putendl(char const *s);
void		ft_putnbr(int nb);
void        ft_putstr(char const *s);
int         ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *s1, char *s2);
char		*ft_strncat(char *dest, char *src, unsigned int nb);

char        *ft_strstr(char *str, char *to_find);

#endif