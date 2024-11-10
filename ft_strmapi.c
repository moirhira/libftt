/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:56:03 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 13:49:02 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char *) * len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}
// #include <stdio.h>
// #include <stdlib.h>
//
// char to_uppercase(unsigned int index, char c) {
//     if (c >= 'a' && c <= 'z') {
//         return c - 32; // Convert to uppercase
//     }
//     return c; // Return the character unchanged if it's not lowercase
// }
//
// int main() {
//     char *input = "hello, world!";
//     char *result = ft_strmapi(input, to_uppercase);
//
//     if (result) {
//         printf("Input: %s\n", input);
//         printf("Output: %s\n", result);
//         free(result); // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//
//     return 0;
// }
