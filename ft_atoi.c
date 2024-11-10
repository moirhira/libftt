/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:57:42 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 21:44:54 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		res;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//    int val;
//    char *str; 
//    str = "    -150ll9.10E";
//    printf("mine  = %d\n", ft_atoi(str));
//    printf("lib   = %d\n", atoi(str));
// }
