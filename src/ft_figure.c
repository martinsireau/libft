#include "libft.h"

int		ft_figure(int number)
{
	int		i;

	i = 0;
	if (number < 0)
		i++;
	number = ft_abs(number);
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}
