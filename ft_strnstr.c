/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:34:21 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/14 13:21:04 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < size)
	{
		if (to_find[c] == str[i])
			c++;
		else if (to_find[c] != '\0')
		{
			i = i - c;
			c = 0;
		}
		if (to_find[c] == '\0')
			return ((char *)&str[i - c + 1]);
		i++;
	}
	return (NULL);
}
