#include "libft.h"

t_lpr		*ft_reset_lpr(t_lpr *stc)
{
	if (stc)
		free(stc);
	stc = ft_memalloc(sizeof(t_lpr*));
	stc->min = 0;
	stc->plus = 0;
	stc->space = 0;
	stc->zero = 0;
	stc->precision = 0;
	stc->field = 0;
	return (stc);
}
