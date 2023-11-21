/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_searching.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:10:38 by canocent          #+#    #+#             */
/*   Updated: 2023/11/21 16:29:03 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "pipex.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

char	*ft_testpaths(char **paths, char *cmd)
{
	char	*valid_cmd;
	int		len;
	int		i;

	i = 0;
	if (!paths)
		return (NULL);
	while (paths[i])
	{
		len = ft_strlen(paths[i]) + ft_strlen(cmd) + 2;
		valid_cmd = ft_calloc(len, sizeof(char));
		if (!valid_cmd)
			return (NULL);
		ft_strlcat(valid_cmd, paths[i], len);
		ft_strlcat(valid_cmd, "/", len);
		ft_strlcat(valid_cmd, cmd, len);
		if (access(valid_cmd, F_OK | X_OK) == -1)
			free(valid_cmd);
		else
			return (valid_cmd);
		i++;
	}
	return (ft_printf("%s: command not found\n", cmd), NULL);
}

void	cmd_not_found(t_cmds *cmds, int index)
{
	cmds->valid_cmd[index] = NULL;
	ft_printf("command %d not found\n", index + 1);
}

void	ft_getcmd(char **cmd, char **av, t_cmds *cmds)
{
	cmds->args[0] = ft_split(av[2], ' ');
	cmds->args[1] = ft_split(av[3], ' ');
	cmd[0] = cmds->args[0][0];
	cmd[1] = cmds->args[1][0];
	if (!cmd[0])
		cmd_not_found(cmds, 0);
	if (!cmd[1])
		cmd_not_found(cmds, 1);
	if (cmd[0] && !((cmd[0][0] == '.' && cmd[0][1] == '/') || cmd[0][0] == '/'))
		cmds->valid_cmd[0] = ft_testpaths(cmds->paths, cmd[0]);
	else
	{
		if (*cmds->args[0])
		cmds->valid_cmd[0] = ft_strdup(*cmds->args[0]);
	}
	if (cmd[1] && !((cmd[1][0] == '.' && cmd[1][1] == '/') || cmd[1][0] == '/'))
		cmds->valid_cmd[1] = ft_testpaths(cmds->paths, cmd[1]);
	else
	{
		if (*cmds->args[1])
			cmds->valid_cmd[1] = ft_strdup(*cmds->args[1]);
	}
}

char	**ft_findpath(char **env)
{
	int		i;
	char	**tab;

	i = 0;
	if (!env)
		return (ft_printf("command not found\n"), NULL);
	while (env[i] != NULL && ft_strncmp("PATH", env[i], 4))
		i++;
	if (!env[i])
		return (NULL);
	tab = ft_split(&env[i][5], ':');
	if (!tab)
		return (NULL);
	return (tab);
}
