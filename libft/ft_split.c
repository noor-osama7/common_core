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
	printf("end counter of words\n");
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
	printf("start malloc\n");
	cont = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	printf("end malloc\n");
	if (!cont || !s)
		return (NULL);
	j = 0;
	while (s[i])
	{
		while (s[j] && s[j] != c)
		{
			j++;
		}
		cont[in++] = ft_substr(s, i, j - i);
		i += j + 1;
	}
	cont[in] = NULL;
	return (cont);
}
/*
int	main()
{
	char	**words = ft_split(" Hello To The Country. ", ' ');
	int	i = 0;
	while (words[i])
	{
		printf("%d)%s, ",i, words[i]);
		i++;
	}
	printf("\n");
}*/
