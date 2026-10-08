/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:04:42 by nabdelaa          #+#    #+#             */
/*   Updated: 2026/10/08 17:04:44 by nabdelaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize > 0)
	{
		while (src[i] && i < (dsize - ft_strlen(dst) - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(dst) + sizeof(src) - 1);
}
/*
int	main()
{
	char	dst[20] = "hello, ";
	printf("length that should have %d,%d, %d", 
	ft_strlcat(dst, "try to do.", sizeof(dst)),
	sizeof("try to do."), ft_strlen(dst));
}*/
