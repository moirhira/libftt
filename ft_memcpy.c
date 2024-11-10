/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:52:59 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:35:33 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d_str, const void *s_str, size_t n)
{
	unsigned char		*dest_str;
	const unsigned char	*src_str;
	size_t				i;

	dest_str = (unsigned char *)d_str;
	src_str = (const unsigned char *)s_str;
	i = 0;
	if (n == 0 || d_str == s_str)
	{
		return (d_str);
	}
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (d_str);
}
// #include <stdio.h>
// #include <string.h>

// // Include your ft_memcpy function here

// int main()
// {
//     // Example 1: Copying a string
//     char src_str[] = "Hello, world!";
//     char dest_str[20]; // Make sure it's large enough
//     ft_memcpy(dest_str, src_str, strlen(src_str) + 1); 
//     printf("Copied string: %s\n", dest_str);
//     // Example 2: Copying an array of integers
//     int src_arr[] = {1, 2, 3, 4, 5};
//     int dest_arr[5];
//     size_t num_bytes = sizeof(src_arr);

//     ft_memcpy(dest_arr, src_arr, num_bytes);

//     printf("Copied integer array: ");
//     for (size_t i = 0; i < sizeof(dest_arr) / sizeof(dest_arr[0]); i++)
//     {
//         printf("%d ", dest_arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
