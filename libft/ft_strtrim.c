/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:33:25 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 07:18:36 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

/* ft_strtrim(string 1, set of characters to trim the string)
char	*ft_strtrim(char const *s1, char const *set);

Ex.:
string = "Let's C if I know what happens";
set = " "; // Space - ascii 32
result = "";

*/
/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*trimmed;

	if (argc != 3)
		return (1);
	trimmed = ft_strtrim(argv[1], argv[2]);
	printf("%s", trimmed);
	free(trimmed);
	return (0);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	if (!*s1 || !*set)
		return (ft_strdup(s1));
	str_len = ft_strlen(s1) + 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = str_len;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}
