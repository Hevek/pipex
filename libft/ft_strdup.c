/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:17:56 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 07:06:47 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

/* ft_strdup():
DESCRIPTION
The  strdup()  function	allocates  sufficient memory for a copy	of the
string str, does	the copy, and returns a	pointer	to  it.	  The  pointer
may subsequently	be used	as an argument to the function free(3).

If  insufficient	memory is available, NULL is returned and errno	is set
to ENOMEM.

The strndup() function copies at	most len characters  from  the	string
str always NUL terminating the copied string.
Return Value:
A pointer to the allocated memory, where the string was copied.
*/
/*
int	main(void)
{
	char *str_1 = "This is a test";
	char *str_2;

	str_2 = ft_strdup(str_1);
	printf("%s\n", str_1);
	printf("%s", str_2);
	free(str_2);
	return (0);
}
 */
char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	duplicate = NULL;
	i = 0;
	while (s[i] != '\0')
		i++;
	duplicate = malloc((sizeof(char) * i) + 1);
	if (duplicate == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		duplicate[i] = s[i];
	duplicate[i] = '\0';
	return (duplicate);
}
