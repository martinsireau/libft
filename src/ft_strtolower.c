#include "libft.h"
#include <stdio.h>

/*
** change lowercase to all uppercase letter which are in the string
*/

char	*ft_strtolower(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}
