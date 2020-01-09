/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:22:55 by tembu             #+#    #+#             */
/*   Updated: 2020/01/08 17:35:14 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	int div;
	int mod;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		n *= -1;
	}
	div = n / 10;
	mod = n % 10;
	if (div != 0)
		ft_putnbr_fd(div, fd);
	ft_putchar_fd(mod + 48, fd);
}