/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:54:04 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/02 22:46:27 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// fd is the ile descriptor value is can hold three value (0, 1, 2)
// 0 
// 1 Writes to standard output (console)
// 2 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>   // For open
// #include <unistd.h> 
// int main() {
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
//     ft_putchar_fd('A', fd); // Writes 'A' to standard output (console)
//     ft_putchar_fd('\n', 1); // Writes a newline to standard output
//     return 0;
// }