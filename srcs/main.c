/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:47:27 by jsage             #+#    #+#             */
/*   Updated: 2022/05/05 13:56:24 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
// #include "push_swap.h"

void	print_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}
	
	int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(1);
	a = init_stack();
	b = init_stack();
	if (a == NULL || b == NULL)
		exit(1);
	fill_stack_a(a, av);
	// if (!check_digit(a) || !check_double(a))
	// 	print_error();
	// check_a_sorted(a);
	// if (ac < 7)
	// 	little_push_swap(a, b);
	// else 
	// 	push_swap(a, b);
	return (0);
}

// int	check_digit(char *a)
// {
// 	int	i;
// 	int	j;

// 	i = 2;
// 	j = 0;
// 	while (av[i][j])
// 	{
// 		while (av[i][j])
// 		{
// 			if(!ft_isdigit(a))
// 				return (0);
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 	}
// 	return (1);
// }

// int	check_double()
// {

// }

// check_a_sorted()
// {
// 	exit(0);
// }
