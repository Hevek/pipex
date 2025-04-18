/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:40 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 07:15:45 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

/* set_array_size(string, delimiter):
Counts the number of substrings necessary to
split the string in an array.

Return Value:
The size of necessary substrings.
size_t size
*/
static size_t	set_array_size(const char *str, char del)
{
	size_t	size;
	int		pos;

	size = 0;
	pos = 0;
	while (*str && *str == del)
		str++;
	while (str[pos])
	{
		if (!pos)
			size++;
		else if (str[pos - 1] == del && str[pos] != del)
			size++;
		pos++;
	}
	return (size);
}

/* ft_word_position(string, delimiter):
Iterates through the string and returns the end of the current word,
accordingly to the delimiter.

Return Value:
The position of the next delimiter, or the end of the string.
*/
static size_t	ft_word_position(char const *str, char del)
{
	size_t	pos;

	pos = 0;
	while (str[pos] && str[pos] != del)
		pos++;
	return (pos);
}

/* ft_split(string, character):
s: The string to be split.
c: The delimiter character.

Return Value:
The array of new strings resulting from the split.
NULL if the allocation fails.

Description:
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	char	**substrs;
	int		i;

	if (argc < 3)
		return (1);
	printf("Start: \n\n");
	substrs = ft_split(argv[1], argv[2][0]);
	i = -1;
	while (substrs[++i])
	{
		printf("s[%d]: %s\n", i, substrs[i]);
		free(substrs[i]);
	}
	free(substrs);
	return (0);
}
*/
char	**ft_split(char const *s, char c)
{
	char		**final_array;
	size_t		limit;
	size_t		array_size;
	size_t		counter;

	if (!s)
		return (NULL);
	array_size = set_array_size(s, c);
	final_array = malloc(sizeof(char *) * (array_size + 1));
	if (!final_array)
		return (NULL);
	counter = 0;
	while (counter < array_size)
	{
		while (*s && *s == c)
			s++;
		limit = ft_word_position(s, c);
		final_array[counter] = ft_substr(s, 0, limit);
		s += limit + 1;
		counter++;
	}
	final_array[array_size] = NULL;
	return (final_array);
}
