/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:51:29 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 07:18:15 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

/* ft_strnstr:
	The  strstr()  function locates the first occurrence of the null-termi-
	nated string little in the null-terminated string big.

	The strcasestr()	function is similar to strstr(), but ignores the  case
	of both strings.

	The  strcasestr_l() function does the same as strcasestr() but takes an
	explicit	locale rather than using the current locale.

	The strnstr() function locates the first	occurrence of the  null-termi-
	nated  string little in the string big, where not more than len charac-
	ters are	searched.  Characters that appear after	a `\0'	character  are
	not  searched.  Since the strnstr() function is a FreeBSD specific API,
	it should only be used when portability is not a	concern.
RETURN VALUES
	If little is an empty string, big is returned; if little	occurs nowhere
	in big, NULL is returned; otherwise a pointer to	the first character of
	the first occurrence of little is returned.
*/
/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	printf("%s", strnstr(argv[1], argv[2], (size_t) ft_atoi(argv[3])));
	return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		lil_len;

	lil_len = ft_strlen(little);
	if (!lil_len)
		return ((char *)big);
	while (*big && lil_len <= len--)
	{
		if (!ft_memcmp(big, little, lil_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
