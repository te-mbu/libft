/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:54:31 by tembu             #+#    #+#             */
/*   Updated: 2020/01/13 19:41:28 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
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
		if (dest[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
