#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    // Strings with embedded null terminators
    char str1[] = "Abc\0def";
    char str2[] = "Abc\0xyz";

    // strcmp would return 0 here because it stops at '\0'
    int str_res = strcmp(str1, str2);
    
    // memcmp checks all 8 bytes, finding the difference past the '\0'
    int mem_res = ft_memcmp(str1, str2, 8);

    printf("strcmp result: %d (Thinks they are equal)\n", str_res);
    printf("memcmp result: %d (Correctly identifies difference)\n", mem_res);

    return 0;
}
*/
