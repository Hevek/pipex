/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:34:02 by restevez          #+#    #+#             */
/*   Updated: 2024/11/28 19:04:55 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

/* ft_memmove(destination, source, length):
DESCRIPTION
The  memmove() function copies len bytes	from string src	to string dst.
The two strings may overlap; the	copy is	always done in a  non-destruc-
tive manner.

RETURN VALUES
The memmove() function returns the original value of dst.
*/
/* int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	return (0);
}
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	while (len--)
		((unsigned char *) dst)[len] = ((unsigned char *) src)[len];
	return (dst);
}
