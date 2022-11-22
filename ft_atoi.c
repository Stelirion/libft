/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:47 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/22 13:31:25 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mul_overflow(long long int *dst, long long int a, long long int b)
{
	*dst = a * b;
	if (!a)
		return ((*dst) / b != a);
	return ((*dst) / a != b);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	size_t			j;
	size_t			k;
	long long int	res;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (mul_overflow (&res, j, 10 + (str[i] - '0')))
			return (-1);
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (j * k);
}
