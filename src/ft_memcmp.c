#include "libft.h"

/*
** return 0, 1, or -1 if 's1' is equal, uppper or lower than 's2'
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (i < n - 1))
		i++;
	if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
	else
		return (0);
}
