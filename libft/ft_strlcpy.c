/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:42 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:51:40 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)

{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n -1))
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int	main()
{
	char dest[10];
	const char *src = "hellocv";
	printf("mine is %ld\n and str is %s\n", ft_strlcpy(dest, src, 4),dest);
}*/
