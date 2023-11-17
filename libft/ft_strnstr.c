/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:34:48 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 11:23:00 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big && len == 0)
		return (NULL);
	if (little[j] == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] != '\0' && big[i + j] == little[j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*int	main()
{
	printf("return is %s\n", ft_strnstr("little est vide", "est", 15));
}*/
