/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:12:28 by canocent          #+#    #+#             */
/*   Updated: 2023/11/20 18:04:23 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "pipex.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

void	exit_child(t_cmds cmds)
{
	ft_freetab(cmds.paths);
	free(cmds.valid_cmd[0]);
	free(cmds.valid_cmd[1]);
	ft_freetab(cmds.args[0]);
	ft_freetab(cmds.args[1]);
	exit(1);
}

int	ft_process1(char **av, t_cmds cmds, int *pipefd)
{
	int	fd1;

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		close(pipefd[1]);
		close(pipefd[0]);
		return (perror(ERROR_FD1), exit_child(cmds), 1);
	}
	else
		dup2(fd1, 0);
	dup2(pipefd[1], 1);
	close(fd1);
	close(pipefd[1]);
	close(pipefd[0]);
	if (cmds.valid_cmd[0] == NULL)
		exit_child(cmds);
	if (execve(cmds.valid_cmd[0], cmds.args[0], NULL) == -1)
	{
		perror(cmds.valid_cmd[0]);
		exit_child(cmds);
	}
	return (0);
}

int	ft_process2(char **av, t_cmds cmds, int *pipefd)
{
	int	fd2;

	fd2 = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
	if (fd2 == -1)
	{
		close(pipefd[1]);
		close(pipefd[0]);
		return (perror(ERROR_FD2), exit_child(cmds), 1);
	}
	else
		dup2(fd2, 1);
	dup2(pipefd[0], 0);
	close(fd2);
	close(pipefd[1]);
	close(pipefd[0]);
	if (cmds.valid_cmd[1] == NULL)
		exit_child(cmds);
	if (execve(cmds.valid_cmd[1], cmds.args[1], NULL) == -1)
	{
		perror(cmds.valid_cmd[1]);
		exit_child(cmds);
	}
	return (0);
}

void	ft_child(char **av, t_cmds *cmds, int *pipefd)
{
	cmds->pid1 = fork();
	if (cmds->pid1 == -1)
		return (perror("fork1"), (void)0);
	if (cmds->pid1 == 0)
		ft_process1(av, *cmds, pipefd);
	cmds->pid2 = fork();
	if (cmds->pid2 == -1)
		return (perror("fork2"), (void)0);
	if (cmds->pid2 == 0)
		ft_process2(av, *cmds, pipefd);
}

int	main(int ac, char **av, char **env)
{
	int		pipefd[2];
	t_cmds	cmds;
	int		status;

	if (ac != 5)
		return (1);
	cmds.paths = ft_findpath(env);
	ft_getcmd(cmds.cmd, av, &cmds);
	if (pipe(pipefd) == -1)
		return (1);
	ft_child(av, &cmds, pipefd);
	close(pipefd[1]);
	close(pipefd[0]);
	waitpid(-1, &status, 0);
	waitpid(-1, &status, 0);
	ft_freetab(cmds.paths);
	free(cmds.valid_cmd[0]);
	free(cmds.valid_cmd[1]);
	ft_freetab(cmds.args[0]);
	ft_freetab(cmds.args[1]);
	return (0);
}
