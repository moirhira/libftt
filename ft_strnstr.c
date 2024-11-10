/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:02:59 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 13:56:20 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while ((s1[i] != '\0') && i < n)
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *) & s1[i]);
		i++;
	}
	return ((char *) NULL);
}
// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     // Take any two strings
//     char s1[] = "GeeksforGeeks";
//     char s2[] = "for";
//     char* p;
//
//     // Find first occurrence of s2 in s1
//     p = ft_strnstr(s1, s2);
//
//     // Prints the result
//     if (p) {
//         printf("String found\n");
//         printf("First occurrence of string '%s' in '%s' is "
//                "'%s'\n",s2, s1, p);
//     }
//     else
//         printf("String not found\n");
//
//     return 0;
// }
