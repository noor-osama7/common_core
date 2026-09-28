void	*ft_memmove(void *dest, const void *src, int n)
{
	int			i;
	char		*pd;
	const char	*ps;

	i = 0;
	pd = dest;
	ps = src;
	while (i < n)
	{
		*pd++ = *ps++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memmove ");
    puts(str1);

    // Copies contents of str2 to sr1
    ft_memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);

    return 0;
}*/
