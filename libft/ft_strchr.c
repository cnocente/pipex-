/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:37:40 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 10:47:15 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	while (str[i] != '\0')
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

/*#include <stdio.h>
#include <string.h> 

int	main()
{
	const char str[10] = "abcdefgh";
	printf("mine = %s\n", ft_strchr(str, 'c'));
	printf("real = %s\n", strchr(str,'c'));
}*/