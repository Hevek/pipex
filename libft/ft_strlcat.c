/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 03:59:44 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 07:24:07 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size);

/*
The strlcpy() and strlcat() functions copy and concatenate strings
respectively. They are designed to be safer, more consistent, and less error
prone replacements for strncpy(3) and strncat(3).  Unlike those
functions, strlcpy() and strlcat() take the full size of the buffer
(not just the length) and guarantee to NUL-terminate the result
(as long as size is larger than 0 or, in the case of strlcat(),
as long as there is at least one byte free in dst).  Note that a byte for
the NUL should be included in size.
Also note that strlcpy() and strlcat() only operate on true “C” strings.
This means that for strlcpy() src must be NUL-terminated and for strlcat()
both src and dst must be NUL-terminated.

The strlcpy() function copies up to size - 1 characters from the
NUL-terminated string src to dst, NUL-terminating the result.

The strlcat() function appends the NUL-terminated string src to the
end of dst. It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result.

RETURN VALUES
The strlcpy() and strlcat() functions return the total length of the string
they tried to create. For strlcpy() that means the length of src.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.

Note, however, that if strlcat() traverses size characters without
finding a NUL, the length of the string is considered to be size and the
destination string will not be NUL-terminated (since there was no space
for the NUL).  This keeps strlcat() from running off the end of a string.
In practice this should not happen (as it means that either size is
incorrect or that dst is not a proper “C” string). The check exists
to prevent potential security problems in incorrect code.
*/
/* #include <stdio.h>
int	main(void)
{
	char	dest[10] = 'a';

	printf("This should be 26:\n%zu",
		ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	return (0);
}
 */
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	org_size;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	org_size = size;
	if (size > dest_len + 1)
	{
		while (src[i] && --size > 0 && dest_len + 1 + i < org_size)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	if (size < dest_len)
		return (size + src_len);
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
