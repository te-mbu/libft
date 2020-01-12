/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:43:47 by tembu             #+#    #+#             */
/*   Updated: 2020/01/12 16:20:09 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s || !len)
		return (NULL);
	if (start > ft_strlen(s))
	{
		string = (char *)malloc(sizeof(char) * 1);
		if (!string)
			return (NULL);
		string[0] = '\0';
		return (string);
	}
	string = (char *)malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	while (len > 0)
	{
		string[i] = ((char *)s)[start + i];
		i++;
		len--;
	}
	string[i] = '\0';
	return (string);
}
