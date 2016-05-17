#include "libft.h"

void		ft_init_struct(t_lpr *stc)
{
	stc->flag = NULL;
	stc->lmod = NULL;
	stc->of_str = NULL;
	stc->out = NULL;
	stc->of_wstr = NULL;
}

void		ft_free_list(t_lpr *stc)
{
	if (stc->flag)
		free(stc->flag);
	if (stc->lmod)
		free(stc->lmod);
	if (stc->out)
		free(stc->out);
}
