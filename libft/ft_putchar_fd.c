/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:57 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 22:33:40 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

/* ft_putchar_fd():
Parameters:
	c: The character to output.
	fd: The file descriptor on which to write.
Return value: None
Description:
	Outputs the character ’c’ to the given file descriptor.
*/
/* #include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 3)
		return (1);
	fd = open(argv[1], O_WRONLY);
	ft_putchar_fd(argv[2][0], fd);
	close(fd);
	return (0);
}
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
