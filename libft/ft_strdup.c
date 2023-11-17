/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:31:28 by canocent          #+#    #+#             */
/*   Updated: 2023/05/11 17:50:14 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	int		l;
	char	*copy;

	i = 0;
	l = ft_strlen(source);
	copy = (char *)malloc((l + 1) * sizeof (char));
	if (!copy)
		return (NULL);
	while (source[i] != '\0')
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
