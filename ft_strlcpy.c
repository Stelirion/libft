/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:10 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/09 17:01:45 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;
	while (src[i] != '\0')
	{
		i++;
		src_size++;
	}
	i = 0;
	while (src[i] != '\0' && dest[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
