/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:34:13 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 10:42:45 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)

{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
}
/*
int		main(void)
{
	char	*s = "Bonjour";
	int		fd;

	fd = 0;
	ft_putstr_fd(s, fd);
	return (0);
}*/
