/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:15:38 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:36:04 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int						i;
	unsigned char			j;

	i = 0;
	j = c;
	while (str[i] != '\0')
		i++;
	if (j == '\0')
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == j)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
int     main()
{
        const char str[10] = "abcdefgh";
        printf("mine = %p\n", ft_strrchr(str, 'h'));
        printf("real = %p\n", strrchr(str,'h'));
}*/