/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:42:26 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:27:21 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97)
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('H'));
	printf("%d\n", ft_isalnum('5'));
}*/
