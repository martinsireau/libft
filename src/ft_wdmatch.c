#include "libft.h"

int		ft_wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (s2[++i])
		while (s1[j] == s2[i])
		{
			j++;
			i++;
			if (s1[j] == '\0')
				return (1);
		}
	return (0);
}
