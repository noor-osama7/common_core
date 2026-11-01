#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	toggle_case_by_index(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c -= 32;
	else if (i % 2 != 0 && (*c >= 'A' && (*c <= 'Z')))
		*c += 32;
}

int	main(void)
{
	char	str[] = "HELLO WORLD"; 

	printf("Before striteri: \"%s\"\n", str);

	// Pass the array and the function pointer
	ft_striteri(str, toggle_case_by_index);

	printf("After striteri:  \"%s\"\n", str);

	return (0);
}
*/
