/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:50 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 21:47:21 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

/* count_nsize(int number, int *sign):
Counts the number of characters used to represent the number, 
including the - (minus) sign, in case the number is negative.
Return Value:
The number of characters required to represent the integer value.
*/
static int	count_nsize(int n, int *sign)
{
	int	size;

	*sign = 1;
	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		size++;
		*sign = -1;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

/* ft_putnbr_fd():
n: The integer to output.
fd: The file descriptor on which to write.

Return value:
Outputs the integer ’n’ to the given file
descriptor.
*/
/* #include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 2)
		return (1);
	fd = open(argv[1], O_WRONLY);
	ft_putnbr_fd(-33, fd);
	close(fd);
	return (0);
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		size;
	int		nb;
	int		sign;

	size = count_nsize(n, &sign);
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	nb = n;
	str[size] = '\0';
	while (--size > 0)
	{
		str[size] = sign * nb % 10 + 48;
		if (nb < 10 && nb > -10)
			str[size] = sign * nb + 48;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	else
		str[0] = 48 + nb;
	ft_putstr_fd(str, fd);
	return ;
}
