#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    char text[] = "Programming in C";
    char target = '\0';

    // Search for the first 'm'
    char *result = ft_strchr(text, target);

    if (result != NULL) {
	printf("size: %lu len: %d\n", sizeof(text), ft_strlen(text));
        printf("Found '%c'!\n", target);
        printf("Substring from match: \"%s\"\n", result);
        printf("Index position: %ld\n", result - text);
// Pointer arithmetic to find index
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}*/
