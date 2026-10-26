#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb != 0 && (size * nmemb) / (size_t)-1)
		return (NULL);
	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}
/*
int main() {
    int *arr;
    size_t size = 5;

    // Allocate memory for 5 integers and initialize them to 0
    arr = (int *)ft_calloc(size, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print elements to prove they are automatically set to 0
    for (size_t i = 0; i < size; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Always free dynamically allocated memory when done!
    free(arr);

    return 0;
}
*/
