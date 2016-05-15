#include "libft.h"

/*
** apply the 'f' function to each node of the linked list
*/

void	ft_lstiter(t_list_1 *lst, void (*f)(t_list_1 *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
