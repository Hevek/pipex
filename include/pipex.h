/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 01:08:16 by restevez          #+#    #+#             */
/*   Updated: 2025/04/18 02:23:50 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

/* Mandatory functions */
void		error(void);
char		*find_path(char *cmd, char **envp);
int			get_next_line(char **line);
void		execute(char *argv, char **envp);

/* Handler functions */
void		free_string_array(char **arr);
void		error(void);
void		free_cmd_array(char **cmd);
void		free_string_array(char **arr);

/* Bonus functions */
int			open_file(char *argv, int i);
void		usage(void);

#endif
