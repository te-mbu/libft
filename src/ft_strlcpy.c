/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:04:14 by tembu             #+#    #+#             */
/*   Updated: 2020/01/08 17:36:11 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length_src;

	if (!src || !dst)
		return (0);
	length_src = ft_strlen(src);
	if (size == 0)
		return (length_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length_src);
}
