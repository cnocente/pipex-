/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:16:51 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:23:45 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char *)pointer1;
	ptr2 = (unsigned char *)pointer2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && n > 0)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
int	main()
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("mine = %d\n", ft_memcmp(s2, s3, 4));
	printf("real = %d\n", memcmp(s2, s3, 4));
}*/
