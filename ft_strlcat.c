unsigned int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_src;
	unsigned int len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (!dest || !src)
		return (0);
	if (size <= len_dest)
		return (len_src + size);
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}
