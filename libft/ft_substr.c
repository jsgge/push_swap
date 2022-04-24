/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:22:40 by jsage             #+#    #+#             */
/*   Updated: 2021/11/09 15:45:45 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;
	size_t	slen;

	i = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	d = ft_calloc(sizeof(char), len + 1);
	if (!s || !d)
		return (NULL);
	if (start < slen)
	{
		while (i < len && s[start])
		{
			d[i] = s[start];
			start ++;
			i ++;
		}
		d[i] = '\0';
	}
	return (d);
}
