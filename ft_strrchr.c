/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:03:48 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 12:23:56 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)ch)
		{
			return ((char *)str + len);
		}
		len--;
	}
	if (ch == '\0')
		return ((char *)str);
	else
		return (NULL);
}
// int main() {
//     const char *c = "hleolo";
//     // char *result = ft_strchr(c, 'l');
//     printf("lib :      %s\n", strrchr(c, 'e'));
//     printf("libmin :      %s\n", ft_strrchr(c, 'e'));
//     // printf("mine :     %s\n", ft_strchr(c, '\0'));
// }
