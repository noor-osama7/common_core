#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*curr;

	if (lst && del)
	{
		curr = *lst;
		while (curr)
		{
			next = curr->next;
			del(curr ->content);
			free(curr);
			curr = next;
		}
		*lst = NULL;
	}
}
/*
void	delete_s(void *content)
{
	printf("deleting content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*p;
	t_list	*nod1;
	t_list	*nod2;

	nod1 = ft_lstnew(ft_strdup("hello"));
	nod2 = ft_lstnew(ft_strdup("here"));
	p = nod1;
	ft_lstadd_front(&p, nod2);
	printf("size: %d\n", ft_lstsize(p));
	printf("last node content: %s\n", (char *)ft_lstlast(p)->content);
	ft_lstclear(&p, delete_s);
	printf("size: %d\n", ft_lstsize(p));
}*/
