/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:21:11 by canocent          #+#    #+#             */
/*   Updated: 2023/05/23 16:28:56 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long number)
{
	int	size;

	size = 0;
	if (number == 0)
		size = 1;
	if (number < 0)
	{
		size++;
		number = number * -1;
	}
	while (number > 0)
	{
		size++;
		number = (number / 10);
	}
	return (size);
}

static void	filltab(int index_max, long number, char *str)
{
	if (number < 0)
		number *= -1;
	while (index_max)
	{
		str[index_max] = number % 10 + '0';
		number = number / 10;
		index_max--;
	}
	if (number == 0)
		str[index_max] = '-';
	else
		str[index_max] = number % 10 + '0';
}

char	*ft_itoa(int number)
{
	unsigned int			size;
	char					*str;

	size = ft_size(number);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (number == 0)
		str[0] = '0';
	else
		filltab(size -1, number, str);
	return (str);
}
/*
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		printf("%s\n", ft_itoa(ft_atoi(av[1])));
	}
}*/