/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:44:31 by restevez          #+#    #+#             */
/*   Updated: 2025/02/12 07:42:08 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/stat.h>

typedef struct str_list
{
	char			*str;
	struct str_list	*next;
}	t_str_list;

char		*get_next_line(int fd);
char		*fill_list(t_str_list **list, int fd);
void		append_str(t_str_list **list, char *str);
char		*ft_strchr(const char *s, int c);
char		*transfer_line(t_str_list **list);
size_t		get_line_size(t_str_list *list);
void		cleanup_list(t_str_list **list, size_t error);
char		*ft_strdup(const char *s);
void		*ft_calloc(size_t nmemb, size_t size);

#endif
