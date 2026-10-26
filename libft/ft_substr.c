#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ssize;
	char	*sub;

	ssize = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > ssize)
	{
		sub = (char *)malloc(0);
		if (!sub)
			return (NULL);
		return (sub);
	}
	if (len > ssize - start)
		len = ssize - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*
int	main()
{
	printf("The Substr:%s:\n", ft_substr("Hello World", 11, 101));
}*/
