/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:44 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 22:21:29 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

/* ft_putstr_fd():
Parameters:
s: The string to output.
fd: The file descriptor on which to write.
Return value: None
Description:
Outputs the string ’s’ to the given file
descriptor.
*/
/* #include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 3)
		return (1);
	fd = open(argv[1], O_WRONLY);
	ft_putstr_fd(argv[2], fd);
	close(fd);
	return (0);
}
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	return ;
}
