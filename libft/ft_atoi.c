/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:53:50 by jsage             #+#    #+#             */
/*   Updated: 2021/11/04 15:05:24 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultat;
	int	negatif;
	int	i;

	resultat = 0;
	negatif = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
		i ++;
	if (str[i] == '-')
		negatif = -1;
	if (str[i] == '-' || str[i] == '+')
		i ++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - 48;
		i ++;
	}
	return (resultat * negatif);
}
