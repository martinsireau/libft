#include "libft.h"

/*
** allocate memory of size 'size' and return a string 'fresh'
** reset with ft_bzero
*/

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void *)malloc(sizeof(void) * size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
