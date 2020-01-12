/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 18:48:40 by tembu             #+#    #+#             */
/*   Updated: 2020/01/12 15:44:10 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (!alst || !new)
		return ;
	if (!(*alst))
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return ;
}
