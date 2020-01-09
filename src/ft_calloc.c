/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:41:02 by tembu             #+#    #+#             */
/*   Updated: 2020/01/09 14:38:40 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	result = NULL;
	result = malloc(count * size);
	if (!result)
		return (NULL);
	while (i <= count)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}