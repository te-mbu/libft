/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:22:19 by tembu             #+#    #+#             */
/*   Updated: 2020/01/12 17:06:01 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int			count_words(const char *str, char c)
{
	size_t i;
	size_t word_len;
	size_t count;

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

static void			*ft_free(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char			**fill_words(const char *s, char **chaine,
								size_t nb_words, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	while (i < nb_words)
	{
		while (str[j] && str[j] == c)
			j++;
		word_len = 0;
		while (str[j + word_len] && str[j + word_len] != c)
			word_len++;
		chaine[i] = (char *)malloc(sizeof(char) * word_len + 1);
		if (!chaine[i])
			return (ft_free(chaine));
		ft_strncpy(chaine[i], &(str[j]), word_len);
		i++;
		j += word_len;
	}
	return (chaine);
}

char				**ft_split(const char *s, char c)
{
	size_t		nb_words;
	char		**chaine;

	if (!s || !c)
		return (NULL);
	nb_words = count_words(s, c);
	chaine = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (!chaine)
		return (NULL);
	chaine = fill_words(s, chaine, nb_words, c);
	chaine[nb_words] = 0;
	return (chaine);
}
