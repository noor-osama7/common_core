#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		lst = lst ->next;
		cnt++;
	}
	return ((unsigned int)cnt);
}
