/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:46:00 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/16 17:01:58 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	start = 0;
	end = 0;
	if (!s1)
		return (NULL);
	while (to_trim(s1[start], set))
		start++;
	while (s1[i + 1])
		i++;
	while (to_trim(s1[i--], set))
		end ++;
	str = malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s1) - start - end))
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
