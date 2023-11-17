/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:58:18 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:44:02 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h> 
#include <ctype.h>
int	main(void)
{
	printf("mine = %d\n", ft_isprint('a'));
	printf("vrai = %d\n", isprint('a'));
}*/
