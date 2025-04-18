/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:38:20 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 13:52:16 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

/* ft_strchr(string, char):
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
	printf("%s", ft_strchr(argv[1], argv[2][0]));
	return (0);
}
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *) s);
}
