#include "libft.h"

/*
** Create a new node and apply to it the 'content' and 'content_size'
** parameter, and set his next parameter to NULL
*/

t_list_1	*ft_lstnew(void const *content, size_t content_size)
{
	t_list_1	*newlst;

	newlst = malloc(sizeof(t_list_1));
	if (newlst == NULL)
		return (NULL);
	if (!content)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		newlst->content = malloc(sizeof(void) * content_size);
		ft_memcpy(newlst->content, content, content_size);
		newlst->content_size = content_size;
	}
	newlst->next = NULL;
	return (newlst);
}
