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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	res;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size > dlen)
		res = dlen + slen;
	else
		return (size + slen);
	while (src[i] && dlen < (size - 1))
		dst[dlen++] = src[i++];
	dst[dlen] = '\0';
	return (res);
}
/*
int	main()
{
	char	dst[20] = "hello, ";
	printf("length that should have %d,%d, %d, %d", 
	ft_strlcat(dst, "try to do.", sizeof(dst)),
	sizeof("try to do."), ft_strlen(dst), sizeof(dst));
}*/
