/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:01:28 by restevez          #+#    #+#             */
/*   Updated: 2024/11/29 21:53:20 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

/* ft_lstnew(unknown content):
Parameters content: The content to create the node with.

Return value:
The new node

External functs. malloc

Description:
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/
/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	t_list	node;
	if (argc != 2)
		return (1);
	node = ft_lstnew(argv[1]);
	printf("%s", (char *) node->content);
	return (0);
}
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = NULL;
	node = (t_list *) malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
