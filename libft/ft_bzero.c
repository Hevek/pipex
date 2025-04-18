/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:57:39 by restevez          #+#    #+#             */
/*   Updated: 2024/11/27 11:58:39 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

/* ft_bzero(string, number)
DESCRIPTION
The  bzero()  function  erases  the  data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes containing
'\0') to that area.

The explicit_bzero() function performs the same task as bzero().  It differs
from  bzero()  in that  it guarantees that compiler optimizations will not
remove the erase operation if the compiler deduces that the operation is
"unnecessary".

RETURN VALUE
None.
*/
/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	i;
	size_t	len;

	if (argc != 3)
		return (1);
	printf("Argv1: %s\n\n", argv[1]);
	len = ft_strlen(argv[1]);
	ft_bzero(argv[1], (size_t) ft_atoi(argv[2]));
	i = 0;
	while ((size_t) i < len)
		write(1, &argv[1][++i], 1);
	return (0);
}
 */
void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = -1;
	while ((size_t)++i < n)
		((unsigned char *) s)[i] = '\0';
}
