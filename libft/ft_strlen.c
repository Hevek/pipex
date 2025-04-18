/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:14:07 by restevez          #+#    #+#             */
/*   Updated: 2024/10/26 19:56:33 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

/* ft_strlen:
The  strlen()  function calculates the length of the string
pointed to by s, excluding the terminating null byte ('\0').
RETURN VALUE
    The strlen() function returns the number of bytes
	in the string pointed to by s.
*/
size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
