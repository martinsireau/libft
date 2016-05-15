#include "libft.h"

int		ft_wchar_len(wchar_t wchar)
{
	int		len;
	char	*tmp;

	tmp = ft_itoa_base(wchar, 2);
	len = ft_strlen(tmp);
	free(tmp);
	if (len <= 7)
		return (1);
	else if (len <= 11)
		return (2);
	else if (len > 11 && len <= 16)
		return (3);
	else
		return (4);
}

int		ft_wstrlen(wchar_t *wstr)
{
	int		i;
	int		ret;
	int		len;

	i = -1;
	ret = 0;
	while (wstr[++i])
	{
		len = ft_wchar_len(wstr[i]);
		ret += len;
	}
	return (ret);
}
