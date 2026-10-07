#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int     main()
{
        printf("%c", ft_tolower('D'));
        printf("%c", ft_tolower('4'));
}*/
