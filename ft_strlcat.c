/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:01:38 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 21:07:07 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && (dlen + i) < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>
// int main()
// {
//     char dst[20] = "hello";
//     const char *src = "world!";
//     size_t size;
//
//     // Test Case 1: Normal concatenation with enough space
//     size = 20;
//     printf("Before: dst = '%s'\n", dst);
//     size_t result = ft_strlcat(dst, src, size);
//     printf("After: dst = '%s', return value = %zu\n\n", dst, result);
// }
