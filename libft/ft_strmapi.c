/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:09 by restevez          #+#    #+#             */
/*   Updated: 2024/11/26 09:33:44 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* *ft_strmapi (const string, char (*function_name)):
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.

Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to collect the
results from the successive applications of f.

*/
/* #include <stdio.h>

size_t	ft_strlen(const char *s);

char	ft_tolower(unsigned int ui, char c)
{
	if (ui > 0)
	{
		if (c > 64 && c < 91)
			c += 32;
	}
	else
	{
		if (c > 64 && c < 91)
			c += 32;
	}
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("%s", ft_strmapi(argv[1], ft_tolower));
	return (0);
}
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
