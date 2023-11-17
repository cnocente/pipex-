/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:15:19 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 15:10:42 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dst && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if ((size == 0) || ((unsigned long) i > size))
		return (size + j);
	if (!src)
		return (i);
	j = 0;
	while (src[j] != '\0' && ((unsigned long) i + j < size -1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*#include <string.h> 


int main ()
{
	const char	src[] = "coucou";
	char		dst[] = "bonjour, comment ca va ?";

	printf("longueur: %ld\n copie: %s\n", ft_strlcat(dst, src, 50), dst);
//printf("longueur: %d\n copie: %s\n", strlcat(dst, src, 50), dst);
	return (0);
}*/
