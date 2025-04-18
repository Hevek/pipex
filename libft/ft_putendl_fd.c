/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:54 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 11:17:52 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

/*
Parameters:
	s: The string to output.
	fd: The file descriptor on which to write.
Return Value: None
Description:
	Outputs the string ’s’ to the given file descriptor
	followed by a newline.
*/
/* #include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 3)
		return (1);
	fd = open(argv[1], O_WRONLY);
	ft_putendl_fd(argv[2], fd);
	close(fd);
	return (0);
}
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
