/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:30:14 by jsage             #+#    #+#             */
/*   Updated: 2021/11/04 19:57:27 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*d2;

	i = 0;
	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (d1[i] == d2[i] && i < n - 1)
	{
		i++;
	}
	return ((int) d1[i] - d2[i]);
}
