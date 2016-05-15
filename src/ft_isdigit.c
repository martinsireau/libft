#include "libft.h"

/*
** check if the c parameterter is a number
*/

int		ft_isdigit(int c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	return (1);
}
