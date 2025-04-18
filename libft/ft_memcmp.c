/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:52:19 by restevez          #+#    #+#             */
/*   Updated: 2024/10/27 15:57:01 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len);

/* ft_memcmp:
	The  memcmp()  function compares	byte string b1 against byte string b2.
	Both strings are	assumed	to be len bytes	long.
RETURN VALUES
	The memcmp() function returns zero if the two  strings  are  identical,
	otherwise  returns the difference between the first two differing bytes
	(treated	as unsigned char values, so that `\200'	is greater than	 `\0',
	for example).  Zero-length strings are always identical.
*/
int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *) b1;
	p2 = (unsigned char *) b2;
	while (len--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		else
		{
			p1++;
			p2++;
		}
	}
	return (0);
}
