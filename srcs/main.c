#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;
	int	len;

	i = 1;
	if (ac == 1)
		return(av[0]);
	if (ac > 1)
	{
		while(ft_isdigit(ac[i]))
		{
			if (!ft_isdigit(ac[i]))
				write(1, "Error\n", 6);
			i++;
		}
	}
	len = i;
	i = 1;
	check_double();
	check_order();
	push_swap();
}