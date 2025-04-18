/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:03:31 by restevez          #+#    #+#             */
/*   Updated: 2024/11/26 13:30:46 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len);

/* ft_memcpy:
	The  memcpy()  function copies n bytes	from string src	to string dst.
	If src and dst overlap, the results are not defined.
RETURN VALUES
	The memcpy() function returns the original value	of dst.
BUGS
	In this implementation memcpy()	is  implemented	 using	bcopy(3),  and
	therefore  the strings may overlap.  On other systems, copying overlap-
	ping strings may	produce	surprises.  Programs intended to  be  portable
	should use memmove(3) when src and dst may overlap.

Quick Note: if you're gonna copy a string to another, please allocate
	enough space :facepalm:.
*/
/* #include <stdio.h>
int	main(void)
{
	char *s1 = "Hello World!";
	char *s2;
	size_t n = 5;

	s2 = malloc(n * sizeof(char));
	ft_memcpy(s2, s1, n);
	printf("%s", s2);
	free(s2);
	return (0);
}
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (dst == NULL && src == NULL)
		return (dst);
	p_dst = (unsigned char *) dst;
	p_src = (unsigned char *) src;
	while (n--)
		*p_dst++ = *p_src++;
	return (dst);
}
