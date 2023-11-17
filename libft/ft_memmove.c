/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:35:38 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:47:10 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	int					i;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest1 = dest;
	src1 = src;
	if (dest1 > src1)
	{
		i = (int) n -1;
		while ((i >= 0))
		{
			dest1[i] = src1[i];
			i--;
		}
	}
	else
		ft_memcpy (dest, src, n);
	return (dest);
}
/*
int	main()
{
	unsigned char dest[15] = "1234bb";
	const unsigned char src[] = "123456";
	printf("%s\n",(char *)ft_memmove(dest, src, 4));
}*/