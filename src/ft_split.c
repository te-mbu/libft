/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:22:19 by tembu             #+#    #+#             */
/*   Updated: 2020/01/08 20:06:07 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

static char			*ft_strncpy(char *dest, char *src, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int			count_words(const char *str, char c)
{
	unsigned int i;
	unsigned int word_len;
	unsigned int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != c)
			word_len++;
		if (word_len)
			count++;
		i += word_len;
	}
	return (count);
}

static char			**fill_words(char *str, char **chaine,
								unsigned int nb_words, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int word_len;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (str[j] && str[j] == c)
			j++;
		word_len = 0;
		while (str[j + word_len] && str[j + word_len] != c)
			word_len++;
		chaine[i] = (char *)malloc(sizeof(char) * word_len + 1);
		if (!chaine[i])
			return (NULL);
		ft_strncpy(chaine[i], &str[j], word_len);
		i++;
		j += word_len;
	}
	return (chaine);
}

char				**ft_split(const char *s, char c)
{
	unsigned int	nb_words;
	char			**chaine;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	chaine = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (!chaine)
		return (NULL);
	chaine = fill_words((char *)s, chaine, nb_words, c);
	chaine[nb_words] = 0;
	return (chaine);
}
