#include "libft.h"

t_list		*ft_reset_list(t_list *stc)
{
	if (stc)
		free(stc);
	stc = ft_memalloc(sizeof(t_list*));
	stc->min = 0;
	stc->plus = 0;
	stc->space = 0;
	stc->zero = 0;
	stc->precision = 0;
	stc->field = 0;
	return (stc);
}
