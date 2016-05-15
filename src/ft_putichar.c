#include "libft.h"

void	ft_putichar(int i, char c)
{
	while (i > 0)
	{
		ft_putchar(c);
		i--;
	}
}
