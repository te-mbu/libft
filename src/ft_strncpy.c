/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:06:55 by tembu             #+#    #+#             */
/*   Updated: 2020/01/12 17:04:46 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*real_src;

	i = 0;
	real_src = (char *)src;
	while (real_src[i] && i < n)
	{
		dest[i] = real_src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
