/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:04:41 by canocent          #+#    #+#             */
/*   Updated: 2023/05/19 18:27:32 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i <= 122 && i >= 97)
	{
		i = i -32;
	}
	return (i);
}
/*#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%c", ft_toupper('a'));
	printf("%c", toupper('a'));
}*/
