#include "libft.h"

int	len_of_num(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		if (n == 0)
			return (len);
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	num;

	num = n;
	len = len_of_num(num);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (num == 0)
		s[0] = '0';
	s[len] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		s[--len] = (num % 10) + '0' ;
		num /= 10;
	}
	return (s);
}
/*
int	main()
{
	printf("The converted num:%s:\n", ft_itoa(-2147483648));
	printf("The converted num:%s:\n", ft_itoa(2147483647));
	printf("The converted num:%s:\n", ft_itoa(-2147483647));
	printf("The converted num:%s:\n", ft_itoa(0));
	printf("The converted num:%s:\n", ft_itoa(-50));
}*/
