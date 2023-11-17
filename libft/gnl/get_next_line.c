/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:35:32 by canocent          #+#    #+#             */
/*   Updated: 2023/11/06 14:28:49 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*clean_stash(char *stash)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash[i] != '\0' && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free (stash);
		return (NULL);
	}
	str = malloc((ft_strlen_gnl(stash) - i) * sizeof(char));
	if (!str)
	{
		free (stash);
		return (NULL);
	}
	i++;
	while (stash[i])
		str[j++] = stash[i++];
	str[j] = '\0';
	free (stash);
	return (str);
}

char	*get_line(char *stash)
{
	int		i;
	char	*str;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	str = malloc((i + 2) * (sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		str[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*read_line(int fd, char *stash)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while ((!ft_strchr_gnl(stash, '\n')) && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == (-1))
		{
			free (buffer);
			free (stash);
			stash = NULL;
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin_gnl(stash, buffer);
	}
	free (buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
	{
		stash = malloc(sizeof(char));
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	stash = read_line(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(stash);
	if (!line)
	{
		free (stash);
		stash = NULL;
		return (NULL);
	}
	if (stash)
		stash = clean_stash(stash);
	return (line);
}
