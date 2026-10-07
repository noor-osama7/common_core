#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *)s + i) == c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    // A raw data buffer containing multiple embedded null bytes
    char buffer[] = {'A', '\0', 'B', 'X', '\0', 'C'};
    size_t buffer_size = sizeof(buffer);
    
    // Search for 'X' across all 6 bytes
    // strchr would stop at index 1 due to '\0'. memchr keeps going.
    char *result = memchr(buffer, 'X', buffer_size);

    if (result != NULL) {
        printf("Found 'X' at memory address offset: %ld\n", result - buffer);
    } else {
        printf("'X' was not found.\n");
    }

    return 0;
}*/
