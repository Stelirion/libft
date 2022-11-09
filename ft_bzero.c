/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:50:54 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/09 16:58:29 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *b, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}
