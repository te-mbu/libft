#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int         ft_atoi(const char *str);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_isprint(int c);
char        *ft_itoa(int n);
void        ft_putchar(char c);
void        ft_putendl(char const *s)
void		ft_putnbr(int nb)
void        ft_putstr(char const *s)
char		*ft_strcat(char *s1, char *s2)
int         ft_strcmp(const char *s1, const char *s2)
char		*ft_strcpy(char *s1, char *s2)
char        *ft_strdup(const char *src)
char        *ft_strjoin(char const *s1, char const *s2)
size_t      ft_strlcat(char *dst, const char *src, size_t size);
size_t      ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_strlen(char *s);
char		*ft_strncat(char *dest, char *src, unsigned int nb);
int         ft_strncmp(char *s1, char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char        *ft_strstr(char *str, char *to_find);
int         ft_tolower(int c);
int         ft_toupper(int c);

#endif