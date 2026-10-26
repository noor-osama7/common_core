#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newc;
	size_t	len;

	len = ft_strlen(s);
	newc = (char *)malloc(sizeof(char) * (len + 1));
	if (newc == NULL)
		return (NULL);
	return (ft_memcpy(newc, s, len + 1));
}
/*
int main() {
    char original[] = "Hello, World!";
    
    // Duplicate the string into a new heap allocation
    char *duplicate = ft_strdup(original);

    // ALWAYS check for NULL after a memory allocation function
    if (duplicate == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Modify the duplicate to prove it is a completely separate copy
    duplicate[0] = 'Y';

    printf("Original string:  %s\n", original);
    printf("Duplicate string: %s\n", duplicate);

    // Clean up heap memory when finished
    free(duplicate);

    return 0;
}*/
