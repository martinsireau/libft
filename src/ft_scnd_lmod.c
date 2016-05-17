#include "libft.h"

void				ft_l(t_lpr *stc)
{
	if (stc->conv != 'p')
	{
		if (ft_needle(stc->conv, "oOuUxX"))
			stc->of_int = (unsigned long)stc->of_int;
		if (stc->conv == 'c')
			stc->of_int = (wchar_t)stc->of_int;
	}
}

void				ft_ll(t_lpr *stc)
{
	if (ft_needle(stc->conv, "uU"))
		stc->of_int = (unsigned long long)stc->of_int;
}

void				ft_j(t_lpr *stc)
{
	if (stc->conv != 'p')
	{
		if (ft_needle(stc->conv, "oOuUxX"))
			stc->of_int = (size_t)stc->of_int;
		else
			stc->of_int = (size_t)stc->of_int;
	}
}

void				ft_z(t_lpr *stc)
{
	if (stc->conv != 'p')
	{
		if (ft_needle(stc->conv, "oOuUxX"))
			stc->of_int = (size_t)stc->of_int;
		else
			stc->of_int = (size_t)stc->of_int;
	}
}
