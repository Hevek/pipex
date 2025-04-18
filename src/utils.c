/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:07:29 by restevez          #+#    #+#             */
/*   Updated: 2025/04/18 02:26:10 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

static char	*check_path(char *dir, char *cmd);

/* find_path(command, environment path)
Looks for the path line inside the environment,
will split and test each command path and then return the right one. */
char	*find_path(char *cmd, char **envp)
{
	char	**paths;
	char	*found_path;
	int		i;

	i = 0;
	paths = NULL;
	found_path = NULL;
	while (envp[i] && ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	if (!paths)
		return (NULL);
	i = 0;
	while (paths[i])
	{
		found_path = check_path(paths[i], cmd);
		if (found_path)
			return (free_string_array(paths), found_path);
		i++;
	}
	return (free_string_array(paths), NULL);
}

/* execute(array of arguments, enviroment path)
Takes the command and send it to find_path
 before executing it. */
void	execute(char *argv, char **envp)
{
	char	**cmd;
	char	*path;

	cmd = ft_split(argv, ' ');
	if (!cmd)
	{
		perror("ft_split");
		exit(EXIT_FAILURE);
	}
	path = find_path(cmd[0], envp);
	if (!path)
	{
		ft_putstr_fd(cmd[0], 2);
		ft_putstr_fd(": command not found\n", 2);
		free_cmd_array(cmd);
		exit(127);
	}
	if (execve(path, cmd, envp) == -1)
	{
		perror("execve");
		free_cmd_array(cmd);
		free(path);
		exit(EXIT_FAILURE);
	}
	return (free_cmd_array(cmd), free(path), exit(EXIT_SUCCESS));
}

// Helper function to build and check a potential path
static char	*check_path(char *dir, char *cmd)
{
	char	*part_path;
	char	*path;

	part_path = ft_strjoin(dir, "/");
	if (!part_path)
		return (NULL);
	path = ft_strjoin(part_path, cmd);
	free(part_path);
	if (!path)
		return (NULL);
	if (access(path, F_OK) == 0)
		return (path);
	free(path);
	return (NULL);
}
