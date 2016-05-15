#include "libft.h"

/*
** apply 'del' fonction to 'alst' node and free the memory which is
** occupied by the node
*/

void	ft_lstdelone(t_list_1 **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
