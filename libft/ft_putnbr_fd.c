#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	ft_putnbr_fd(1032, 1);
}*/
