/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:45:51 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 18:11:10 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c);

/* ft_strrchr:
	The strchr() function locates the first occurrence of c (converted to a
	char) in	the string pointed to by s.  The terminating null character is
	considered  part	 of  the string; therefore if c	is `\0', the functions
	locate the terminating `\0'.

	The strrchr() function is identical to strchr() except it  locates  the
	last occurrence of c.

	The  strchrnul()	 function is identical to strchr() except that if c is
	not found in s a	pointer	to the terminating `\0'	is returned.

RETURN VALUES
	The functions strchr() and strrchr() return a pointer  to  the  located
	character, or NULL if the character does	not appear in the string.

	strchrnul()  returns a pointer to the terminating `\0' if the character
	does not	appear in the string.
*/
/* 
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	printf("%s", ft_strrchr(argv[1], argv[2][0]));
	return (0);
}
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *) s + len);
		len--;
	}
	return (NULL);
}
