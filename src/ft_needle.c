#include "libft.h"

int		ft_needle(char c, char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}
