/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:56:33 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/14 13:17:09 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *void_s1, const void *void_s2, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	i = 0;
	s1 = (char *)void_s1;
	s2 = (char *)void_s2;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((s1[i] > s2[i]) || (s2[i] == '\0' && s1[i] != '\0'))
			return (1);
		if ((s1[i] < s2[i]) || (s1[i] == '\0' && s2[i] != '\0'))
			return (-1);
		else
			i++;
	}
	return (0);
}
