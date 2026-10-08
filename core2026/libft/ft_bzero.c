/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:54:11 by nabdelaa          #+#    #+#             */
/*   Updated: 2026/10/08 17:46:54 by nabdelaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
struct User {
    char name[20];
    int id;
};

int main() {
    struct User user1;

    printf("Before Clear: %d : %lu\n", user1.id, sizeof(user1));
    ft_bzero(&user1, sizeof(user1));
    printf("Function Clear - ID: %d : %lu\n", user1.id, sizeof(user1));

    // Modern, Portable way: Clearing memory with memset
    memset(&user1, 0, sizeof(user1));
    printf("Modern Clear - ID: %d : %lu\n", user1.id, sizeof(user1));

    return 0;
}*/
