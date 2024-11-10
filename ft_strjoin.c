/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:25:29 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 18:34:15 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcoopy(char *dest, const char *src, size_t start)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		s1len;
	size_t		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!ptr)
		return (NULL);
	ft_strcoopy(ptr, s1, 0);
	ft_strcoopy(ptr, s2, s1len);
	ptr[s1len + s2len] = '\0';
	return (ptr);
}
// #include <stdio.h>
// int main() {
//     // Test with normal strings
//     char *s1 = "Tech";
//     char *s2 = "withMed";    
//     char *result = ft_strjoin(s1, s2);
//     if (result) {
//         printf("Test 1:'Tech' and 'withMed': %s\n", result);
//         	free(result);
//     } else {
//         printf("Test 1 - Memory allocation failed.\n");
//     }
//     // Test with an empty string and a normal string
//     s1 = "";
//     s2 = "Hello!";
//     result = ft_strjoin(s1, s2);
//     if (result) {
//         printf("Test 2: '' and 'Hello!': %s\n", result);
//         free(result);
//     } else {
//         printf("Test 2 - Memory allocation failed.\n");
//     }
//     // Test with a normal string and an empty string
//     s1 = "Hello!";
//     s2 = NULL;
//     result = ft_strjoin(s1, s2);

//     if (result) {
//         printf("Test 3 - Concatenation of 'Hello!' and '': %s\n", result);
//         free(result);
//     } else {
//         printf("Test 3 - Memory allocation failed.\n");
//     }

//     // Test with two empty strings
//     s1 = "";
//     s2 = "";
// 
//     result = ft_strjoin(s1, s2);
//
//     if (result) {
//         printf("Test 4 - Concatenation of '' and '': %s\n", result);
//         free(result);
//     } else {
//         printf("Test 4 - Memory allocation failed.\n");
//     }

//     return 0;
// }
