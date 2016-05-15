/*
** apply 'del' fonction to each 'alst' node and free the memory which is
** occupied by the node
*/

#include "libft.h"

void	ft_lstdel(t_list_1 **alst, void (*del)(void*, size_t))
{
	t_list_1	*tmp_lst;

	while (*alst)
	{
		tmp_lst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = tmp_lst;
	}
}
