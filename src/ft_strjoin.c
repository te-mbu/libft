#include <stdlib.h>

int     ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char		*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

 char * ft_strjoin(char const *s1, char const *s2)
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