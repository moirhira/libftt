/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:54:41 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 12:03:56 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	buffer[12];

	i = 0;
	if (n == 0)
		buffer[i++] = '0';
	else if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write (fd, &buffer[--i], 1);
}
// #include <fcntl.h>   // For open
// int main() {
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
//     ft_putnbr_fd(0, fd); // Writes a newline to standard output
//     return 0;
// }
