#include "libft.h"
#include <stdio.h>

/*
** change to uppercase all lowercase letter which are in the string
*/

char	*ft_strtoupper(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
