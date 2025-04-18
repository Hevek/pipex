/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:08:46 by restevez          #+#    #+#             */
/*   Updated: 2024/11/27 11:11:22 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

/* ft_strjoin(string 1, string 2):
DESCRIPTION
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

RETURN VALUE
The new string.
NULL if the allocation fails.
*/
/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	printf("%s", ft_strjoin(argv[1], argv[2]));
	return (0);
}
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	int		j;

	i = -1;
	j = -1;
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (joined == NULL)
		return (NULL);
	while (s1[++i])
		joined[++j] = s1[i];
	i = -1;
	while (s2[++i])
		joined[++j] = s2[i];
	joined[++j] = '\0';
	return (joined);
}
