/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:36:22 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:26:34 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		compteur;
	char		*destination;
	const char	*source;

	if (src == NULL && dest == NULL)
		return (NULL);
	compteur = 0;
	destination = (char *)dest;
	source = (const char *)src;
	while (compteur < n)
	{
		destination[compteur] = source[compteur];
		compteur++;
	}
	return (destination);
}
/*
int main()
{
	const char	src[] = "copie";
	char	dest[] = "hello";
	printf("mine = %s\n", (char *) ft_memcpy(dest, src, 5));
	printf("real = %s\n", (char *) memcpy(dest, src, 5));
}
*/
