/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:31:03 by canocent          #+#    #+#             */
/*   Updated: 2023/11/06 14:28:14 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen_gnl(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr_gnl(const char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	if (!str)
		return (NULL);
	while (str && str[i] != '\0')
	{
		if (str[i] == ch)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (ch == '\0')
		return ((char *)(str + i));
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	str = malloc((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1) * sizeof(char));
	if (!str)
	{
		free (s1);
		return (NULL);
	}
	while (s1 && s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	free (s1);
	return (str);
}
