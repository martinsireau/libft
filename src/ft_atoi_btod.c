#include "libft.h"

int		ft_atoi_btod(char *str, int nb, int i, int result)
{
	result = 0;
	if (nb >= 0 && str[i])
	{
		if (str[i] == '1')
			result = ft_power(2, nb);
		else
			result = 0;
		i++;
		result += ft_atoi_btod(str, nb = nb - 1, i++, result);
	}
	return (result);
}
