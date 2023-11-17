/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:18:07 by canocent          #+#    #+#             */
/*   Updated: 2023/11/10 15:01:51 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <unistd.h>

# define ERROR_FD1 "Failed to open input file"
# define ERROR_FD2 "Failed to open output file"

typedef struct s_cmds
{
	char	*cmd[2];
	char	*valid_cmd[2];
	char	**paths;
	char	**args[2];
	int		fd;
	int		pipefd[2];
	pid_t	pid1;
	pid_t	pid2;
}			t_cmds;

void		ft_freetab(char **tab);
char		*ft_testpaths(char **paths, char *cmd);
void		ft_getcmd(char **cmd, char **av, t_cmds *cmds);
char		**ft_findpath(char **env);

#endif