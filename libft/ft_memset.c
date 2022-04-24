/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:58:35 by jsage             #+#    #+#             */
/*   Updated: 2021/10/26 16:47:06 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)b;
	while (len > 0)
	{
		dest[i] = (unsigned char)c;
		i ++;
		len --;
	}
	return (b);
}
