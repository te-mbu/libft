/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:43:47 by tembu             #+#    #+#             */
/*   Updated: 2020/01/09 16:32:39 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
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
