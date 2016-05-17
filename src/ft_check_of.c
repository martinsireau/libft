#include "libft.h"

static int		ft_isnumber(char c)
{
	return ((c < '9' && c > '0') || (c < 'e' && c > 'a')
			|| c == '0' || c == 'x');
}

int				ft_check_of(t_lpr *stc)
{
	const char		*nb;
	int				i;

	i = 0;
	nb = ft_itoa((int)stc->of_int);
	while (nb[i])
	{
		if (!ft_isnumber(nb[i]))
			return (0);
		i++;
	}
	return (1);
}
