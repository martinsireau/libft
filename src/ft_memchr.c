#include "libft.h"

/*
** search a char 'c' on 'n' bytes of string 's'
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
