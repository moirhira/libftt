/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:59:28 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:04:47 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     // char c[5] = NULL;
//     if (ft_isprint(NULL)) {
//         printf("%c is printable", c);
//     } else {
//         printf("%c is not printable", c);
//     }
// }
