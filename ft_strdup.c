/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:01:22 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 12:28:37 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		size;
	char	*ptr;
	int		i;

	i = 0;
	size = ft_strlen(str);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}
// #include <stdio.h>
// int main() {
//     const char *original = "Hello, world!";
//     char *duplicate = ft_strdup(original);
//     if (duplicate) {
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", duplicate);
//         free(duplicate); // Don't forget to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }
