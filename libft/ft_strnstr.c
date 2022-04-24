/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:49:06 by jsage             #+#    #+#             */
/*   Updated: 2021/11/12 16:36:12 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!needle[0])
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i] == needle[j] && haystack[i] && i < len)
			{
				i++;
				j++;
			}
			if (j == (unsigned long) ft_strlen(needle))
				return ((char *) &haystack[k]);
			i = k;
		}
		i++;
	}
	return (0);
}
