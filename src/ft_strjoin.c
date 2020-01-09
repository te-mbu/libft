/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:03:43 by tembu             #+#    #+#             */
/*   Updated: 2020/01/09 12:29:47 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static char			*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char				*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*string;
	char	*real_s1;
	char	*real_s2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	real_s1 = (char *)s1;
	real_s2 = (char *)s2;
	string = NULL;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[0] = '\0';
	ft_strcat(string, real_s1);
	ft_strcat(string, real_s2);
	string[len] = '\0';
	return (string);
}
