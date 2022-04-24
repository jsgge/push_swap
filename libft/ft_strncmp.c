/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:14:03 by jsage             #+#    #+#             */
/*   Updated: 2022/04/23 15:42:27 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	unsigned char	*s;
	unsigned char	*t;

	i = 0;
	s = (unsigned char *)s1;
	t = (unsigned char *)s2;
	if (n <= 0)
		return (n);
	while (s[i] && s[i] == t[i] && i < n - 1)
	{
		i ++;
	}
	return (s[i] - t[i]);
}
