#include "libft.h"

void	wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		while (s1[j] == s2[i])
		{
			j++;
			i++;
			if (s1[j] == '\0')
			{
				ft_putstr(s1);
				ft_putchar('\n');
			}
		}
		i++;
	}
}
