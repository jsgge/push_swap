/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:15:59 by jsage             #+#    #+#             */
/*   Updated: 2021/11/04 15:35:03 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	d;
	unsigned char	*s1;

	i = 0;
	d = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (n)
	{
		if (s1[i] == d)
			return (&s1[i]);
		i ++;
		n --;
	}
	return (NULL);
}
