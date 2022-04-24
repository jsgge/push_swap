/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:15:16 by jsage             #+#    #+#             */
/*   Updated: 2021/11/08 19:43:04 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*d;

	i = 0;
	j = 0;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	while (s1[i])
	{
		d[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		d[i] = s2[j];
		i ++;
		j ++;
	}
	d[i] = '\0';
	return (d);
}
