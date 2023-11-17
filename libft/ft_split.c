/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:54:51 by canocent          #+#    #+#             */
/*   Updated: 2023/08/21 15:58:05 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*copyword(char const *s, char c)
{
	char	*new_s;
	int		i;
	int		lengh;

	i = 0;
	lengh = 0;
	while (s[lengh] != c && s[lengh])
	{
		lengh++;
	}
	new_s = ft_calloc(lengh + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	while (i < lengh)
	{
		new_s[i] = s[i];
		i++;
	}
	return (new_s);
}

void	free_tab(char **tab)
{
	int	j;

	j = 0;
	if (tab == NULL)
		return ;
	while (tab[j] != NULL)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

static char	**ft_filltab(char **tab, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < ft_wordcount(s, c))
	{
		if (s[i] == c)
			i++;
		else
		{
			tab[j] = copyword(&s[i], c);
			if (tab[j] == NULL)
			{
				free_tab(tab);
				return (NULL);
			}
			j++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	if (s == NULL)
		return (NULL);
	nb_word = ft_wordcount(s, c);
	tab = ft_calloc(nb_word + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	tab = ft_filltab(tab, s, c);
	return (tab);
}
/*
int	main()
{
	char **tab = ft_split("\0aa\0bbb",'\0');
	int i = 0;
	
	while (tab && tab[i])
		printf("%s\n", tab[i++]);
	free_tab(tab);
} */
