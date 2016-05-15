#include "libft.h"

void	sort_in_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				swap;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			swap = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		i++;
	}
}
