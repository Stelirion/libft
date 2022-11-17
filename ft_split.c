/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:40:13 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/17 11:57:18 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int words;
    int size;
    char **split;
    
    
    i = 0;
    words = 0;
    while (s[i])
    {
        if (s[i] == c && s[i - 1] != c)
            words++;
        i++;
    }
    split = malloc(sizeof(char *) * words + 1);
    i = 0;
    j = 0;
    size = 0;
    while (j < words)
    {
        while (s[i], )
        ft_substr[]
        j++;
        size = 0;
    }
}

