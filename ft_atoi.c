/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:01:50 by tembu             #+#    #+#             */
/*   Updated: 2020/01/13 19:39:24 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_atoi_2(const char *str, int *neg)
{
	int		i;
	size_t	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result);
}

int					ft_atoi(const char *str)
{
	int		neg;
	size_t	result;

	neg = 1;
	result = ft_atoi_2(str, &neg);
	if (result > 9223372036854775807)
	{
		if (neg == 1)
			return (-1);
		if (neg == -1)
			return (0);
	}
	return ((int)result * neg);
}
