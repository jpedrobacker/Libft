#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*temp;

	begin = (*(lst));
	while (begin != NULL)
	{
		temp = begin->next;
		ft_lstdelone(begin, del);
		begin = temp;
	}
	*lst = NULL;
}
