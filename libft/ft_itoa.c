/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:55:19 by jsage             #+#    #+#             */
/*   Updated: 2021/11/11 15:44:29 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	lenn;

	lenn = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		lenn = 1;
	while (n)
	{
		lenn ++;
		n = n / 10;
	}
	return (lenn);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483647 - 1)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[len--] = '\0';
	while (n > 9)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len --;
	}
	if (n >= 0 && n <= 9)
		str[len] = n + '0';
	return (str);
}
