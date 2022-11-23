/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:43 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/23 08:46:28 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	size;
	size_t	start;
	char	**tab;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	tab = malloc(sizeof(char *) * words + 1);
	if (!tab)
		return (NULL);
	tab[words + 1] = ft_strdup("NULL");
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size = 0;
			start = i;
			while (s[i] != c)
			{
				i++;
				size++;
			}
			tab[words] = ft_substr(s, start, size);
			words++;
		}
		i++;
	}
	return(tab);
}
