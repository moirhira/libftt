/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:04:23 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 14:13:15 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
// int main() {
//     // Test with uppercase letters
//     test_tolower('A');  // Expected: 'a'
//    (should return the same character)
//     test_tolower('1');  // Expected: '1'
//     test_tolower('`');  // Expected: '`'
//     return 0;
// }