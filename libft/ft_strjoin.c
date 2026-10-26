#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	len1;
	unsigned long	len2;
	char			*sjoin;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	sjoin = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	ft_memcpy(sjoin, s1, len1);
	ft_memcpy(sjoin + len1, s2, len2);
	sjoin[len1 + len2] = '\0';
	return (sjoin);
}
/*
int	main()
{
	printf("Concatenating String:%s:\n", ft_strjoin("hello", "Noor"));
	printf("Concatenating String:%s:\n", ft_strjoin("je", NULL));
}*/
