#include "push_swap.h"

check_digit
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
}

check_double()
{

}

a_sorted()
{
 exit();
}