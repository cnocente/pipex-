/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:00:38 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 14:43:35 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (n);
	while ((s1[i] && s2[i]) && i < n - 1 && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	size_t	n;

	n = 3;
	const char	s1[10] = "bFc";
	const char	s2[10] = "bfc";

	printf("mine = %d\n", ft_strncmp(s1, s2, n));
	printf("real = %d\n", strncmp(s1, s2, n));
	return (0);
}*/
