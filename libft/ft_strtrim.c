/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:09:53 by canocent          #+#    #+#             */
/*   Updated: 2023/05/15 10:52:10 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		i;
	int		j;
	char	*str;

	i = 0;
	size = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (check_set(s1[i], set) && s1[i])
		i++;
	while (check_set(s1[size -1], set) && i < size)
		size--;
	str = malloc((size - i + 1) * sizeof (char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < size - i)
	{
		str[j] = s1[j + i];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(int ac, char **av)
{
	char *str;
	
	if (ac != 3)
		return (0);
	str = ft_strtrim(av[1], av[2]);
	printf("%s\n", str);
	free(str);
}*/