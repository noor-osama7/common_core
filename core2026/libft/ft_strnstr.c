/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:05:53 by nabdelaa          #+#    #+#             */
/*   Updated: 2026/10/08 17:05:55 by nabdelaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] && (i + j) < len
			&& haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *haystack = "Eeny meeny miny moe!";
    const char *needle = "moe";

    // Case 1: Search limit is too short (only looks at first 10 characters)
    char *res1 = ft_strnstr(haystack, needle, 10);
    
    // Case 2: Search limit is long enough (looks at first 20 characters)
    char *res2 = ft_strnstr(haystack, needle, 20);

    if (res1 == NULL) {
        printf("Result 1: 'moe' not found within 10 characters.\n");
    }

    if (res2 != NULL) {
        printf("Result 2: Found '%s' at index %ld!\n", needle, res2 - haystack);
    }

    return 0;
}*/
