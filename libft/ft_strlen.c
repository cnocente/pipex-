/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:15 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 14:32:17 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("mine = %d\n", ft_strlen("salut les copines"));
	printf("vrai = %ld\n", strlen("salut les copines"));
}*/
