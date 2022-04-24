/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:07:49 by jsage             #+#    #+#             */
/*   Updated: 2021/11/07 21:17:34 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	retourligne;

	i = 0;
	retourligne = '\n';
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i ++;
	}
	write (fd, &retourligne, 1);
}
