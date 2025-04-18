/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:47:36 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 13:24:35 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

/* ft_calloc:
The calloc() function allocates memory for an array of nmemb
elements of size bytes each and returns a pointer to the
allocated memory.  The memory is set to zero.  If nmemb or size
is 0, then calloc() returns a unique pointer value that can later
be successfully passed to free().

If the multiplication of nmemb and size would result in integer
overflow, then calloc() returns an error.  By contrast, an
integer overflow would not be detected in the following call to
malloc(), with the result that an incorrectly sized block of
memory would be allocated:
	malloc(nmemb * size);
RETURN VALUE
	The malloc(), calloc(), realloc(), and reallocarray() functions
	return a pointer to the allocated memory, which is suitably
	aligned for any type that fits into the requested size or less.
	On error, these functions return NULL and set errno.  Attempting
	to allocate more than PTRDIFF_MAX bytes is considered an error,
	as an object that large could cause later pointer subtraction to
	overflow.

	The free() function returns no value, and preserves errno.
ERRORS         top
	calloc(), malloc(), realloc(), and reallocarray() can fail with
	the following error:

	ENOMEM:
	Out of memory.  Possibly, the application hit the
	RLIMIT_AS or RLIMIT_DATA limit described in getrlimit(2).
	Another reason could be that the number of mappings
	created by the caller process exceeded the limit specified
	by /proc/sys/vm/max_map_count.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	alloc_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t) -1) / size)
		return (NULL);
	alloc_size = nmemb * size;
	ptr = malloc(alloc_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, alloc_size);
	return (ptr);
}
