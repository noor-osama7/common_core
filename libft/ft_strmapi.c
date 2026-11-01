#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	mock_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*str = "hello world";
	char	*result;

	result = ft_strmapi(str, mock_upper_even);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Modified: %s\n", result);
		free(result);
	}
	return (0);
}
*/
