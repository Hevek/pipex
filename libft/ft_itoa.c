/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:03:23 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 21:53:47 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
char	*ft_strdup(const char *s);

/* count_nsize(int number, int *sign):
Counts the number of characters used to represent the number,
including the - (minus) sign, in case the number is negative.
Return Value:
The number of characters required to represent the integer value.
*/
/* #include <stdio.h>
#include <limits.h>
int	main(void)
{
	printf("1230: %s\n", ft_itoa(1230));
	printf("-123: %s\n", ft_itoa(-123));
	printf("-3: %s\n", ft_itoa(-3));
	printf("-22: %s\n", ft_itoa(-22));
	printf("0: %s\n", ft_itoa(0));
	printf("1: %s\n", ft_itoa(1));
	printf("10: %s\n", ft_itoa(10));
	printf("INT_MAX is %d: %s\n", INT_MAX, ft_itoa(INT_MAX));
	printf("INT_MIN is %d: %s\n", INT_MIN, ft_itoa(INT_MIN));
	return (0);
}
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

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		nb;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = count_nsize(n, &sign);
	str = (char *) malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
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
	return (str);
}
