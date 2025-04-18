/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:10 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 19:01:18 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 5)
		return (1);
	printf("Argv1 is: %d\n", ft_atoi(argv[1]));
	printf("Argv2 is: %d\n", ft_atoi(argv[2]));
	printf("Argv3 is: %d\n", ft_atoi(argv[3]));
	printf("Argv4 is: %d\n", ft_atoi(argv[4]));
	return (0);
}
 */
int	ft_atoi(const char *nptr)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while (nptr[i] && ((nptr[i] == ' ')
			|| (nptr[i] >= '\t' && nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n *= 10;
		n += (nptr[i++] - 48);
	}
	return (sign * n);
}
