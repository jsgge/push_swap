/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:39:18 by jsage             #+#    #+#             */
/*   Updated: 2021/11/09 17:56:14 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		istart;
	int		iend;

	i = 0;
	istart = 0;
	iend = ft_strlen(s1);
	while (s1[istart] && ft_set(s1[istart], set))
		istart ++;
	while (iend > istart && ft_set(s1[iend - 1], set))
		iend --;
	str = malloc(sizeof(char) * ((iend - istart) + 1));
	if (!str)
		return (NULL);
	while (istart < iend)
	{
		str[i] = s1[istart];
		i ++;
		istart ++;
	}
	str[i] = '\0';
	return (str);
}	
