/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:35:09 by restevez          #+#    #+#             */
/*   Updated: 2024/11/27 11:44:53 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

/* ft_memset:
The memset() function fills the first n bytes of the
memory area pointed to by s with the constant byte c.

RETURN VALUE
The memset() function returns a pointer to the memory area s.
*/
/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc != 4)
		return (1);
	str = ft_strdup(argv[1]);
	printf("Str before: %s\n", str);
	ft_memset(str, argv[2][0], ft_atoi(argv[3]));
	write(1, "\n", 1);
	printf("Str after: %s\n", str);
	return (0);
}
 */
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (len-- > 0)
	{
		*p++ = (unsigned char) c;
	}
	return (s);
}
