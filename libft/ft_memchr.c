/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:34:07 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 22:14:40 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len);

/* ft_memchr(big, char, len):
The  memchr()  function locates the first occurrence of c (converted to
an unsigned char) in string b.

The memrchr() function behaves like memchr(), except  that  it  locates
the last	occurrence of c	in string b.

Return Value:
The  memchr()  and memrchr() functions return a pointer to the byte located,
 or NULL if no such byte exists within len bytes.
*/
/* #include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	printf("%s",
		(char *) ft_memchr(argv[1],
			ft_atoi(argv[2]),
			(size_t) ft_atoi(argv[3])));
	printf("\n");
	printf("%s",
		(char *) memchr(argv[1],
			ft_atoi(argv[2]),
			(size_t) ft_atoi(argv[3])));
	return (0);
}
 */
void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*big;

	big = (unsigned char *) b;
	while (len--)
	{
		if (*big == (unsigned char) c)
			return ((void *) big);
		big++;
	}
	return (NULL);
}
