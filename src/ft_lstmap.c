#include "libft.h"

/*
** Create a new linked list which is the result of the 'lst' list throught
** the 'f' function
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	newlst = NULL;
	if (lst && f)
	{
		newlst = f(lst);
		if (newlst && lst->next)
			newlst->next = ft_lstmap(lst->next, f);
	}
	return (newlst);
}
