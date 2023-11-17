/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:56:58 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:39:37 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int	main()
{
	unsigned char s[] = {10,20,30,40,50,60,70};
	
	ft_memchr(s, '50', 8);
	printf("mine is %s", s);
	return (0);
}*/