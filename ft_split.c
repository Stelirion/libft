/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:43 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/23 14:31:08 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **tab, size_t line)
{
	size_t	i;

	i = 0;
	while (i <= line)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**setup_tab(char const *s, char c)
{
	size_t	i;
	size_t	words;
	char	**tab;

	i = 0;
	words = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	size;
	size_t	start;
	char	**tab;

	i = 0;
	words = 0;
	tab = setup_tab(s, c);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			size = 0;
			start = i;
			while (s[i] && s[i] != c)
			{
				i++;
				size++;
			}
			tab[words] = ft_substr(s, start, size);
			if (!tab[words])
				return (free_all(tab, words));
			words++;
		}
	}
	tab[words] = NULL;
	return (tab);
}
