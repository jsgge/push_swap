/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:22:56 by jsage             #+#    #+#             */
/*   Updated: 2021/11/08 20:20:56 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}	
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i ++;
		}
	}
	return (dst);
}
