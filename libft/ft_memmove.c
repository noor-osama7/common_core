/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:24:17 by nabdelaa          #+#    #+#             */
/*   Updated: 2026/10/08 18:02:32 by nabdelaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	pd = dest;
	ps = src;
	if (pd < ps)
	{
		while (n--)
			*pd++ = *ps++;
	}
	else
	{
		pd += (n - 1);
		ps += (n - 1);
		while (n--)
			*pd-- = *ps--;
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
