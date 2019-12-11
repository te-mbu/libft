#include "../inc/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char *string;
    char *new_s1;
    char *new_s2;

    new_s1 = s1;
    new_s2 = s2;
    len = ft_strlen(new_s1) + ft_strlen(new_s2) + 1;
    string = NULL;
    string = (char *)malloc(sizeof(char) * len);
    if (!string)
        return (NULL);
    string = ft_strcat(new_s1, new_s2);
    return (string);
}