#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nod;
	t_list	*nlst;

	if (!lst || !f)
		return (NULL);
	nod = NULL;
	nlst = NULL;
	while (lst)
	{
		nod = ft_lstnew(f(lst ->content));
		if (!nod)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nod);
		lst = lst ->next;
	}
	return (nlst);
}
