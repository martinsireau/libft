#include "libft.h"

/*
** set with '\0' the 's' string
*/

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		s[i++] = '\0';
}
