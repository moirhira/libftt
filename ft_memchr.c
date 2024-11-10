/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:59:44 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:25:02 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	if (!s)
		return (NULL);
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
//     char buffer[50] = "hello every one";
//     char *res = (char *)ft_memchr(buffer, 'l', 2);
//     // if (res)
// 	// {
//         printf("founded at position %d\n",ft_memchr(NULL, 'l',2));
// 		printf("founded at position %d\n",memchr(NULL, 'l', 2));
// 	// }
//     // else
//     //     printf("not founded\n");
// }
