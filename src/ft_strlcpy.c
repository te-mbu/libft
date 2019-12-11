#include "../inc/libft.h"

size_t      strlcpy(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int length_src;

	length_src = ft_strlen(src);
	if (!length_src || !src || !dest)
		return (0);
	if (size == 0)
		return (length_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length_src);
}
