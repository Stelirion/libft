/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:07:52 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/09 17:02:55 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned int	ft_strlen(char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *b, int len);
void			*ft_memcpy(void *dest, const void *src, size_t size);
//memove
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
unsigned int	ft_strlcat(char *dest,const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
//memchr
//memcmp
char			*ft_strnstr(char *str, char *to_find, int size);
int				ft_atoi(char *str);

#endif
