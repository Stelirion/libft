/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:34:21 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/13 15:42:05 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(char *str, char *to_find, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
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
			return (&str[i - c + 1]);
		i++;
	}
	return (NULL);
}
