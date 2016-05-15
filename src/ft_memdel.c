#include "libft.h"

/*
** free the memory occupied by '*ap' and set the '*ap' to NULL
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
