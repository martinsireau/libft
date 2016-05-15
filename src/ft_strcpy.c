#include "libft.h"

/*
**copy the 'src' string in 'dest' and set to '\0' the end of the 'dest' table
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
		dest[i++] = '\0';
	return (dest);
}
