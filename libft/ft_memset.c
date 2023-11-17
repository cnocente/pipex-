/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:14:24 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:30:18 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		n--;
		p++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "oonjour";
	ft_memset(str, 'b', 1 *sizeof(char));

	printf("%s\n", str);
}*/
