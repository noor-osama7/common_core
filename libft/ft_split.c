#include "libft.h"

static long	count_words(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**cont;
	size_t	i;
	size_t	j;
	size_t	in;

	in = 0;
	i = 0;
	cont = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!cont || !s)
		return (NULL);
	while (s[i] && in < (size_t)count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		cont[in++] = ft_substr(s, i, j - i);
		i = j;
	}
	cont[in] = NULL;
	return (cont);
}
/*
int	main()
{
	char	**words = ft_split("", ' ');
	int	i = 0;
	while (words[i])
	{
		printf("%d)%s, ",i, words[i]);
		i++;
	}
	printf("%d)%s, ",i, words[i]);
	printf("\n");
}*/
