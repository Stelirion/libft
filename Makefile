# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 13:23:24 by ngennaro          #+#    #+#              #
#    Updated: 2022/11/16 17:06:12 by ngennaro         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c

#ft_split.c
#ft_itoa.c
#ft_strmapi.c
#ft_striteri.c
#ft_putchar_fd.c
#ft_putstr_fd.c
#ft_putendl_fd.c
#ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

HEADERS	= libft.h

NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror

.c.o:		$(HEADERS)
			${CC} -c $< -o $@ -I .

${NAME} :	${OBJS}
			$(AR) -rcs ${NAME} ${OBJS}

all :		${NAME}

clean :
			${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re :		fclean
			$(MAKE) all

.PHONY:		.c.o $(NAME) all clean fclean re
