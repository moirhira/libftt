/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:58:09 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 21:52:41 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// #include <stdint.h>
// int	main(void)
// {
//     int *arr = (int *)ft_calloc(2353453456, 4565266546456);
// 	int *arr1 = (int *)calloc(2353453456, 4565266546456);
//     // if (!arr && !arr1)
//     // {
//     //     printf("Memory allocation failed\n");
//     //     return (1);
//     // }
//     // for (size_t i = 0; i < 0; i++)
//     // {
//         printf("arr min = %s\n",  arr);
// 		printf("arr lib = %s\n",  arr1);
//     // }
//     // free(arr);
// }
// size_t	total;
// total = count * size;
// if (count != 0 && (total / count) < size)
