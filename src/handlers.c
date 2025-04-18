/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 02:02:31 by restevez          #+#    #+#             */
/*   Updated: 2025/04/18 02:13:04 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	free_string_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

void	error(void)
{
	perror("\033[31mError");
	exit(EXIT_FAILURE);
}

void	free_cmd_array(char **cmd)
{
	int	i;

	i = -1;
	while (cmd[++i])
		free(cmd[i]);
	free(cmd);
}
