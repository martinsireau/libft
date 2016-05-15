#include "libft.h"

/*
** create a new node 'ls_new' in the begining of the linked list pointed
** by 'alst'
*/

void	ft_lstadd(t_list_1 **alst, t_list_1 *ls_new)
{
	ls_new->next = *alst;
	*alst = ls_new;
}
