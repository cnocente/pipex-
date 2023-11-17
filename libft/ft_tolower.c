/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:04:41 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:55:13 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("mine = %c\n", ft_tolower('X'));
	printf("real = %c\n", tolower('X'));
}*/
