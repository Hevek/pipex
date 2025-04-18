/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:02:30 by restevez          #+#    #+#             */
/*   Updated: 2024/11/26 09:55:02 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* ft_striteri(string, function_name):

Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
/* #include <stdio.h>

void	ft_tolower(unsigned int ui, char *c)
{
	if (c[0] > 64 && c[0] < 91)
		c[0] += 32;
	if (ui)
		return ;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	ft_striteri(argv[1], ft_tolower);
	printf("%s", argv[1]);
	return (0);
}
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
