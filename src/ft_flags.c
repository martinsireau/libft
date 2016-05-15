#include "libft.h"

void			minus(t_list *stc)
{
	if (stc->field > 0)
	{
		ft_putichar(stc->field, ' ');
		stc->printed += stc->field;
	}
}

void			plus(t_list *stc)
{
	if (ft_needle(stc->conv, "di"))
	{
		if (stc->of_int >= 0)
			stc->field--;
		if (!stc->min && !stc->zero)
		{
			while (stc->field-- > 0)
			{
				ft_putchar(' ');
				stc->printed++;
			}
		}
		if (stc->of_int < 0)
		{
			ft_putchar('-');
			stc->of_int = ft_abs(stc->of_int);
			stc->printed++;
		}
		else
		{
			ft_putchar('+');
			stc->printed++;
		}
	}
}

void			space(t_list *stc)
{
	if (!stc->plus && !stc->min && !ft_needle(stc->conv, "oOuxXcCsSp"))
	{
		if (!ft_needle(stc->conv, "dDioOuUxX"))
			stc->field--;
		if (stc->of_int < 0)
		{
			ft_putchar('-');
			stc->of_int = ft_abs(stc->of_int);
			stc->printed++;
		}
		else if (stc->of_int >= 0)
		{
			ft_putchar(' ');
			stc->field--;
			stc->printed++;
		}
		if (!stc->zero && stc->field > 0)
		{
			ft_putichar(stc->field, ' ');
			stc->printed += stc->field;
		}
	}
}
