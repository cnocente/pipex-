/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:05:29 by canocent          #+#    #+#             */
/*   Updated: 2023/05/22 14:32:31 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char	f(unsigned int i, char c)
{
	char	ptr;

	ptr = c + i;
	return (ptr);
}

int	main()
{
char    *ptr1;
    char     *ptr2;

    ptr1 = "abc";
    ptr2 = ft_strmapi(ptr1, *f);
    printf("%s\n", ptr2);
}*/
