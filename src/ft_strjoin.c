/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <tembu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:03:43 by tembu             #+#    #+#             */
/*   Updated: 2020/01/12 16:44:35 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char				*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*string;
	char	*real_s1;
	char	*real_s2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	real_s1 = (char *)s1;
	real_s2 = (char *)s2;
	string = NULL;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[0] = '\0';
	ft_strcat(string, s1);
	ft_strcat(string, s2);
	string[len] = '\0';
	return (string);
}
