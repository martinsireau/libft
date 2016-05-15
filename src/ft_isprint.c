#include "libft.h"

/*
** check if the c parameter is printable
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
