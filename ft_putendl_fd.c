/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:54:26 by moirhira          #+#    #+#             */
/*   Updated: 2024/11/03 11:57:05 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// #include <fcntl.h>   // For open
// int main() {
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644); 
//     ft_putendl_fd("hello every one", fd);
//     return 0;
// }
