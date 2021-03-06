#include "libft.h"

/*
**compare 2 strings and return 0 if they are the same or the difference
**between the two strings
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
