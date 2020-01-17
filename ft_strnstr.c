/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:15:28 by tembu             #+#    #+#             */
/*   Updated: 2020/01/16 15:19:11 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s1_real;
	char	*s2_real;
	size_t	i;
	size_t	j;
	size_t	len_s2;

	i = 0;
	len_s2 = ft_strlen(s2);
	s1_real = (char *)s1;
	s2_real = (char *)s2;
	if (!s2_real[0])
		return (s1_real);
	while (s1_real[i] && i < n)
	{
		j = 0;
		while (s1_real[i + j] == s2_real[j] && i + j < n)
		{
			if (j == len_s2 - 1)
				return (s1_real + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
