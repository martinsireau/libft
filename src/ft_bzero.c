#include "libft.h"

/*
** set n byte of string "s" to "\0"
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str_s;

	i = 0;
	str_s = (char*)s;
	while (i < n)
		str_s[i++] = '\0';
}
