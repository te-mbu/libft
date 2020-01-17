/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:09:12 by tembu             #+#    #+#             */
/*   Updated: 2020/01/13 19:41:54 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = -1;
	if (!s1 && !s2)
		return (NULL);
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (src > dest)
	{
		while (++i < n)
			dest[i] = src[i];
	}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	return (dest);
}
