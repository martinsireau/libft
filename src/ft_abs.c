#include "libft.h"

/*
** return the absolute value of 'nb'
*/

int		ft_abs(int nb)
{
	if (nb < 0)
		return (-1 * nb);
	return (nb);
}
