/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:47:29 by jsage             #+#    #+#             */
/*   Updated: 2022/05/05 13:56:40 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

t_stack	*init_stack(void)
{
	t_stack	*ptr;

	ptr = malloc(sizeof(t_stack));
	if (ptr == NULL)
		return (NULL);
	ptr->bottom = NULL;
	ptr->top = NULL;
	return (ptr);
}

void	fill_stack_a(t_stack *a, char **av)
{
	int	i;
	(void)a;

	i = 1;
	while (av[i])
	{
		printf("av -> %s\n", av[i]);
		i++;
	}
}
