/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:19:05 by jsage             #+#    #+#             */
/*   Updated: 2022/05/05 13:53:33 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>
# include "libft.h"

# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11

typedef struct s_node t_node;
struct s_node
{
	int	nb;
	t_node *next;
};

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
}	t_stack;

// INIT
t_stack	*init_stack(void);
void	fill_stack_a(t_stack *a, char **av);


#endif
