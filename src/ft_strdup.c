/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:03:35 by tembu             #+#    #+#             */
/*   Updated: 2020/01/07 12:21:05 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
