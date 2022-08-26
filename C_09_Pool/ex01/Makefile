# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tribes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:39:12 by tribes            #+#    #+#              #
#    Updated: 2022/08/25 21:25:20 by tribes           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

HEADERS = includes/

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o :
	${CC} -I ${HEADERS} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :    ${OBJS}
		ar -rc ${NAME} ${OBJS}

all :		${NAME}

clean :
		${RM} ${OBJS}

fclean :	clean
		${RM} ${NAME}

re :		fclean all
