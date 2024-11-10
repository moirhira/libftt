/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:01:09 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 14:22:25 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	else
		return (NULL);
}
// #include <stdio.h>
// int main() {
//     const char *c = "hleolo";
//     // char *result = ft_strchr(c, 'l');
//     printf("lib :      %s\n", strchr(c, 'l'));
//     printf("lib :      %s\n", ft_strchr(c, 'l'));
//     // printf("mine :     %s\n", ft_strchr(c, '\0'));
// }
