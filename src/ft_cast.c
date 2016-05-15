#include "libft.h"

void		ft_cast_u(t_list *suitcase)
{
	if (suitcase->of_int <= 65535)
		suitcase->of_int = (unsigned int)suitcase->of_int;
	else if (suitcase->of_int <= 4294967295)
		suitcase->of_int = (unsigned long)suitcase->of_int;
	else if (suitcase->of_int > 4294967295)
		suitcase->of_int = (unsigned long long)suitcase->of_int;
}
