/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:55:42 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 12:31:13 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include <ctype.h>
// void capitalize_even_indices(unsigned int index, char *ch) {
//     if (index % 2 == 0 && *ch >= 'a' && *ch <= 'z') {
//         *ch = *ch - ('a' - 'A'); // Convert to uppercase
//     }
// }
// int main() {
//     char str[] = "hello world!";
//     printf("Original string: %s\n", str);
//     ft_striteri(str, capitalize_even_indices);
//     printf("Modified string: %s\n", str);
//     return 0;
// }
