/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:50:08 by jsage             #+#    #+#             */
/*   Updated: 2021/11/12 18:33:19 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_string(char const *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i ++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, (i + 1));
	return (str);
}

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i ++;
		if (s[i] != c && s[i])
			count ++;
		while (s[i] != c && s[i])
			i ++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strlen;
	char	**str;

	strlen = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (strlen + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < strlen)
	{
		while (s[0] == c)
			s ++;
		str[i] = ft_string(s, c);
		if (!str[i])
		{
			while (i > 0)
				free(str[i --]);
			free(str);
			return (NULL);
		}
		s = s + ft_strlen(str[i]);
	}
	str[i] = 0;
	return (str);
}
