#include "libft.h"

/*
** check if the c parameter is a letter or a number
*/

int		ft_isalnum(int c)
{
	if (((c < 'A') || (c > 'Z')) && ((c < 'a') ||
		(c > 'z')) && ((c < '0') || (c > '9')))
		return (0);
	return (1);
}
