/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:06:12 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 13:26:35 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strlen;
	char	*copy;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_calloc(sizeof(char), 1));
	if (len > strlen - start)
		len = strlen - start;
	copy = (char *)malloc((len + 1) * sizeof (char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		copy[i] = s[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}

// int	main()
// {
// 	char *str = ft_substr("tripouille",10, 6);
// 	char *str2 = substr("tripouille",10, 6);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// 	free(str);
// 	free(str2);
// }