/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:38:04 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:37:19 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	total_size;

	total_size = count * size;
	if ((size != 0) && (total_size / size) != count)
		return (NULL);
	mem = (void *) malloc (total_size);
	if (!mem)
		return (NULL);
	ft_bzero (mem, total_size);
	return (mem);
}
