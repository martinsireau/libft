#include "libft.h"

/*
** check if the c parameter is in the ascii table
*/

int		ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}
