/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:27:41 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/09 14:39:25 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	*str = (char)b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
}
