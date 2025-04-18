/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 07:18:07 by restevez          #+#    #+#             */
/*   Updated: 2025/02/12 07:42:24 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd);

char	*get_next_line(int fd)
{
	static t_str_list	*list[1024];
	char				*line;
	t_str_list			*tmp;

	line = NULL;
	if (fd == -1 || BUFFER_SIZE <= 0)
		return (cleanup_list(&list[fd], 1), NULL);
	if (list[fd] && list[fd]->str == NULL)
	{
		tmp = list[fd]->next;
		free(list[fd]);
		list[fd] = tmp;
	}
	line = fill_list(&list[fd], fd);
	if (!line)
		return (cleanup_list(&list[fd], 1), NULL);
	return (line);
}

char	*fill_list(t_str_list **list, int fd)
{
	int		b_read;
	char	*str;

	b_read = 1;
	str = NULL;
	while (b_read != 0 && !ft_strchr(str, '\n'))
	{
		str = ft_calloc(BUFFER_SIZE + 1, 1);
		if (!str)
			return (cleanup_list(list, 1), NULL);
		b_read = read(fd, str, BUFFER_SIZE);
		if (!b_read)
			return (free(str), transfer_line(list));
		if (b_read == -1 || BUFFER_SIZE <= 0)
			return (free(str), cleanup_list(list, 1), NULL);
		str[BUFFER_SIZE] = '\0';
		append_str(list, str);
	}
	return (transfer_line(list));
}

void	append_str(t_str_list **list, char *str)
{
	t_str_list	*new;
	t_str_list	*last;

	new = ft_calloc(sizeof(t_str_list), 1);
	if (!new)
		return (free(str), cleanup_list(list, 1));
	new->str = str;
	new->next = NULL;
	if (!*list)
		*list = new;
	else if ((*list)->str == NULL)
	{
		free(*list);
		*list = new;
	}
	else
	{
		last = *list;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

char	*transfer_line(t_str_list **list)
{
	char		*line;
	size_t		i;
	size_t		j;
	t_str_list	*tmp;

	if (!*list || (!(*list)->str && (*list)->next == NULL))
		return (cleanup_list(list, 1), NULL);
	line = ft_calloc(get_line_size(*list) + 1, 1);
	if (!line)
		return (free(line), cleanup_list(list, 1), NULL);
	j = -1;
	tmp = *list;
	while (tmp)
	{
		i = -1;
		while (tmp->str && tmp->str[++i])
		{
			line[++j] = tmp->str[i];
			if (tmp->str[i] == '\n')
				return (cleanup_list(list, 0), line[++j] = '\0', line);
		}
		tmp = tmp->next;
	}
	line[++j] = '\0';
	return (cleanup_list(list, 0), line);
}
