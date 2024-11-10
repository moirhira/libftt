/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:00:51 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:44:15 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main() {
//     char buffer[50] = "GeeksForGeeks is for programming geeks.";
//     ft_memset(buffer + 13, '.', 7);
//     //     printf("Buffer mine: %s\n", buffer); 
//     char buffer2[50] = "GeeksForGeeks is for programming geeks.";   
//     memset(buffer2 + 13, '.', 7);
//     printf("Buffer lib : %s\n", buffer2);
//     return 0;
// }
