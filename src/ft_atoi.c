#include "libft.h"
#include <stdio.h>

/*
** return the conversion from a number of type char to a number of type int
*/

int		ft_atoi(const char *str)
{
	int		i;
	int		a;
	int		isneg;

	i = 0;
	a = 0;
	isneg = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (str[i])
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (a * isneg);
		a = a * 10 + (str[i++] - '0');
	}
	return (a * isneg);
}
