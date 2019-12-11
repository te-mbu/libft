#include "../inc/libft.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int space_check(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (0);
    return (1);
}

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char *ft_strtrim(char const *s)
{
    int i;
    int j;
    int len;
    char *string;

    i = 0;
    j = 0;
    while (s[i] && space_check(s[i]))
    {
        if (i + 1 == ft_strlen(s))
        {
            len = ft_strlen(s) + 1;
            string = NULL;
            string = (char *)malloc(sizeof(char) * len);
            if (!string)
                return (NULL);
            string = s;
            return (string);
        }
        i++;
    }
    i = 0;
    while (s[i] && !space_check(s[i]))
        i++;
    while (s[i + j] && space_check(s[i + j]))
        j++;
    len = j + 1;
    string = NULL;
    string = (char *)malloc(sizeof(char) * len);
    if (!string)
        return (NULL);
    string = ft_strncpy(string, &s[i], j);
    return (string);
}