#include "../inc/libft.h"

int			is_a_charset(char to_compare, char c)
{
		if (c == to_compare)
			return (1);
		else
			return (0);
}

char		*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int			count_words(const char *str, char c)
{
	unsigned int i;
	unsigned int word_len;
	unsigned int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_a_charset(str[i], c))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_a_charset(str[i + word_len], c))
			word_len++;
		if (word_len)
			count++;
		i += word_len;
	}
	return (count);
}

char		**fill_words(const char *str, char **chaine, unsigned int nb_words, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int word_len;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (str[j] && is_a_charset(str[j], c))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_a_charset(str[j + word_len], c))
			word_len++;
		chaine[i] = malloc(sizeof(char) * word_len + 1);
		if (!chaine[i])
			return (NULL);
		ft_strncpy(chaine[i], &str[j], word_len);
		i++;
		j += word_len;
	}
	return (chaine);
}

char    	**ft_strsplit(const char *s, char c)
{
	unsigned int nb_words;
	char **chaine;

	nb_words = count_words(s, c);
	chaine = malloc(sizeof(char *) * nb_words + 1);
	if (!chaine)
		return (NULL);
	chaine = fill_words(s, chaine, nb_words, c);
	chaine[nb_words] = 0;
	return (chaine);
}