/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:47:15 by restevez          #+#    #+#             */
/*   Updated: 2024/10/27 15:56:57 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len);

/* ft_strncmp
	The  strcmp()  and  strncmp()  functions	 lexicographically compare the
	null-terminated strings s1 and s2.

	The strncmp() function compares not more	than len characters.   Because
	strncmp()  is  designed	for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.
RETURN VALUES
	The strcmp() and	strncmp() functions return an  integer	greater	 than,
	equal  to,  or less than	0, according as	the string s1 is greater than,
	equal to, or less than the string s2.  The comparison is	done using un-
	signed characters, so that `\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
		return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
