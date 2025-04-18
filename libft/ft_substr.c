/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:29 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 09:20:26 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

/* ft_substr():
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.

Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
/*
#include <stdio.h>

int		ft_atoi(const char *nptr);

int	main(int argc, char *argv[])
{
	if (argc < 4)
		return (1);
	printf("Substring of \"%s\" is: \n", argv[1]);
	printf("%s\n",
		ft_substr(
			(char const *) argv[1],
			(unsigned int) ft_atoi(argv[2]),
			(size_t) ft_atoi(argv[3])
			)
		);
	return (0);
}
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	s_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	sub_len = s_len - (size_t) start;
	if (start > s_len)
		return ((char *) ft_calloc(1, sizeof(char)));
	if (len > s_len)
		len = s_len - start + 1;
	if (sub_len > len)
		sub_len = len;
	substr = malloc(sizeof(char) * sub_len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (char *)(s + start), len + 1);
	return (substr);
}
