/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:29:27 by jsage             #+#    #+#             */
/*   Updated: 2021/11/04 19:20:14 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	d;

	d = 0;
	while (dst[d] && d < dstsize)
		d++;
	i = d;
	while (src[d - i] && d + 1 < dstsize)
	{
		dst[d] = src[d - i];
		d ++;
	}
	if (i < dstsize)
		dst[d] = '\0';
	return (i + ft_strlen(src));
}
