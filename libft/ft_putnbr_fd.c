#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	t;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	t = (num % 10) + '0';
	write(fd, &t, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(-2147483647, 1);
	ft_putnbr_fd(0, 1);
        ft_putnbr_fd(-50, 1);
	ft_putnbr_fd(1032, 1);
}*/
