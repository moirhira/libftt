/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:56:22 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/04 14:47:23 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimedstr;
	size_t	ibg;
	size_t	iend;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	iend = ft_strlen(s1);
	ibg = 0;
	while (s1[ibg] && ft_checkset(set, s1[ibg]))
		ibg++;
	while (iend > ibg && ft_checkset(set, s1[iend - 1]))
		iend--;
	trimedstr = (char *)malloc(sizeof(char) * (iend - ibg + 1));
	if (!trimedstr)
		return (NULL);
	i = 0;
	while (iend > ibg)
	{
		trimedstr[i++] = s1[ibg++];
	}
	trimedstr[i] = '\0';
	return (trimedstr);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// char *ft_strtrim(char const *s1, char const *set);
//
// int main() {
//     // Test case 1
//     char *result1 = ft_strtrim("   Hello, World!aaaaabeeee   ", "  ");
//     printf("Result 1: '%s'\n", result1);
//     free(result1);
//
//     // Test case 2
//     char *result2 = ft_strtrim("-Hello, World!-", "-");
//     printf("Result 2: '%s'\n", result2);
//     free(result2);
//
//     // Test case 3
//     char *result3 = ft_strtrim("!!!Welcome!!!", "!");
//     printf("Result 3: '%s'\n", result3);
//     free(result3);
//
//     // Test case 4
//     char *result4 = ft_strtrim("   A B C   ", " ");
//     printf("Result 4: '%s'\n", result4);
//     free(result4);
//
//     // Test case 5
//     char *result5 = ft_strtrim("XYZHelloXYZ", "XYZ");
//     printf("Result 5: '%s'\n", result5);
//     free(result5);
//
//     // Test case 6
//     char *result6 = ft_strtrim("No trimming needed", " ");
//     printf("Result 6: '%s'\n", result6);
//     free(result6);
//
// return 0;
// }
