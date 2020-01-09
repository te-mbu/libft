/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:18:48 by tembu             #+#    #+#             */
/*   Updated: 2020/01/09 13:10:05 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	src = (unsigned char *)s2;
	dest = (unsigned char *)s1;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (s1);
}
