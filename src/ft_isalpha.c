#include "libft.h"

/*
** check if the c parameter is a letter
*/

int		ft_isalpha(int c)
{
	if (((c < 'A') || (c > 'Z')) && ((c < 'a') || (c > 'z')))
		return (0);
	else
		return (1);
}
