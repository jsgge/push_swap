/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:11:00 by jsage             #+#    #+#             */
/*   Updated: 2021/11/11 15:42:33 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*chaine;

	i = 0;
	chaine = ((char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1)));
	if (!s || !chaine)
		return (NULL);
	while (s[i])
	{
		chaine[i] = f(i, s[i]);
		i ++;
	}
	chaine[i] = '\0';
	return (chaine);
}
