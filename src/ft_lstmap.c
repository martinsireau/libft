#include "libft.h"

/*
** Create a new linked list which is the result of the 'lst' list throught
** the 'f' function
*/

t_list_1	*ft_lstmap(t_list_1 *lst, t_list_1 *(*f)(t_list_1 *elem))
{
	t_list_1	*newlst;

	newlst = NULL;
	if (lst && f)
	{
		newlst = f(lst);
		if (newlst && lst->next)
			newlst->next = ft_lstmap(lst->next, f);
	}
	return (newlst);
}
