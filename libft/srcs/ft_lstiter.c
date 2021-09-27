#include "header.h"
void	ft_lstiter(t_list **lst, void (*f) (void *))
{
	t_list	**tmp;

	tmp = lst;
	while ((*tmp)->next)
	{
		f((*tmp)->content);
		*tmp = (*tmp)->next;
	}
}