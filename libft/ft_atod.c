/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:05:14 by jsage             #+#    #+#             */
/*   Updated: 2022/04/23 16:31:39 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atod(const char *s, double nb, double lvl, char negative)
{
	while ((ft_strchr(" \t\n\r\v\f", *s)) && (*s))
		s++;
	if (*s == '+')
		s++;
	else if ((*s == '-') && (*(s++)))
		negative = 1;
	while (ft_isdigit(*s))
		nb = (nb * 10) + (*(s++) - '0');
	if (*s != '.')
	{
		if (negative)
			return (nb * -1);
		return (nb);
	}
	s++;
	while ((*s) && (ft_isdigit(*s)))
	{
		nb += (double)((*(s++)) - '0') / lvl;
		lvl *= 10.0;
	}
	if (negative)
		return (nb * -1);
	return (nb);
}
