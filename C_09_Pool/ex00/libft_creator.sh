# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tribes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 23:57:33 by tribes            #+#    #+#              #
#    Updated: 2022/08/25 21:24:20 by tribes           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
