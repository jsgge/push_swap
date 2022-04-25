#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;
	int	len;

	i = 1;
	check_digit();
	check_double();
	a_sorted();
	if (ac < 7)
		sort_small_stack();
	else 
		sort_stack();
}