/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:06:02 by nabdelaa          #+#    #+#             */
/*   Updated: 2026/10/08 17:06:05 by nabdelaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		--i;
	}
	return (NULL);
}
/*
int main() {
    char text[] = "Programming in C";
    char target = 'i';

    // Search for the first 'm'
    char *result = ft_strrchr(text, target);

    if (result != NULL) {
        printf("%lu\n", sizeof(text));
        printf("Found '%c'!\n", target);
        printf("Substring from match: \"%s\"\n", result);
        printf("Index position: %ld\n", result - text);
// Pointer arithmetic to find index
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}*/
