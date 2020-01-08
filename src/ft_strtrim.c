/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:07:21 by tembu             #+#    #+#             */
/*   Updated: 2020/01/08 20:54:58 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

static int				is_in_charset(char const *set, char c)
{
	int i;
	char *charset;

	i = 0;
	charset = (char *)set;
	while (charset[i])
	{
		if (charset[i] = c)
			return (1);
		i++;
	}
	return (0);
}

char			*malloc_me(int len, char start, char end)
{
	
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && is_in_charset(set, s1[i])
		i++;
	if (i = ft_strlen(s1))
	{
		malloc_me
	}
}