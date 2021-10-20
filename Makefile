# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcousins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 01:42:02 by kcousins          #+#    #+#              #
#    Updated: 2021/10/19 01:42:07 by kcousins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_isalnum.c\
ft_atoi.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_tolower.c ft_toupper.c ft_bzero.c ft_calloc.c ft_strlen.c\
ft_strnstr.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_strlcat.c ft_substr.c\
ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_strrchr.c ft_striteri.c ft_strchr.c\
ft_split.c ft_memchr.c ft_memcmp.c ft_memset.c ft_memmove.c ft_memcpy.c 

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
