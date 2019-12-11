#include "../inc/libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*string;
	int		size;

	i = 0;
	size = ft_strlen(src);
	string = NULL;
	string = (char *)malloc(sizeof(char) * (size + 1));
	if (!string)
		return (NULL);
	while (src[i])
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
