void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h> // Required for bzero()
#include <string.h>  // Required for modern memset()

struct User {
    char name[20];
    int id;
};

int main() {
    struct User user1;

    printf("Before Clear: %d : %d\n", user1.id, sizeof(user1));
    ft_bzero(&user1, sizeof(user1));
    printf("Function Clear - ID: %d : %d\n", user1.id, sizeof(user1));

    // Modern, Portable way: Clearing memory with memset
    memset(&user1, 0, sizeof(user1));
    printf("Modern Clear - ID: %d : %d\n", user1.id, sizeof(user1));

    return 0;
}*/
