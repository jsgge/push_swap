/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:17:54 by jsage             #+#    #+#             */
/*   Updated: 2021/11/12 16:54:31 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	char	nbr[12];
	int		i;

	i = 0;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb == -2147483648)
	{
		nbr[i] = '8';
		nb = nb / 10;
		i ++;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		nbr[i] = nb % 10 + '0';
		nb = nb / 10;
		i ++;
	}
	while (--i >= 0)
		write(fd, &nbr[i], 1);
}
