#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nod;
	t_list	*nlst;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	nod = NULL;
	nlst = NULL;
	while (lst)
	{
		temp = f(lst ->content);
		nod = ft_lstnew(temp);
		if (!nod)
		{
			del(temp);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nod);
		lst = lst ->next;
	}
	return (nlst);
}
