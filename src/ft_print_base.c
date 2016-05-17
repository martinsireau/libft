#include "libft.h"

void	ft_print_base(t_lpr *stc, int base)
{
	char		*tmp;

	tmp = ft_itoa_base(stc->of_int, base);
	ft_putstr(tmp);
	stc->printed += ft_strlen(tmp);
	free(tmp);
}

void	ft_print_base_max(t_lpr *stc, int base)
{
	char		*tmp;

	tmp = ft_itoa_base_ulongmax(stc->of_int, base);
	ft_putstr(tmp);
	stc->printed += ft_strlen(tmp);
	free(tmp);
}
