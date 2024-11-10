/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:00:35 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:40:55 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = d;
	src = (const unsigned char *)s;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (dest >= src)
	{
		while (n--)
		{
			dest[n] = src[n];
		}
	}
	return (d);
}
