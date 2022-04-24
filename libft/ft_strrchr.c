/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:00:44 by jsage             #+#    #+#             */
/*   Updated: 2021/11/04 17:32:35 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lens;

	lens = ft_strlen(s);
	while (lens)
	{
		if (s[lens] == (char) c)
			return ((char *) &s[lens]);
		lens --;
	}
	if (s[lens] == (char) c)
		return ((char *) &s[lens]);
	return (NULL);
}
