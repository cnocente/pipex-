# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: canocent <canocent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 14:06:05 by canocent          #+#    #+#              #
#    Updated: 2023/11/08 11:58:23 by canocent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex
	
SRCS		=	main.c utils.c path_searching.c

CC			=	clang
	
CFFLAGS		=	-Wall -Wextra -Werror -g3

LIB			=	-Llibft -lft

OBJS		=	$(SRCS:%.c=%.o)

all	:	$(NAME)

%.o	:	%.c
	$(CC) $(CFFLAGS) $(INCLUDES) -c $< -o $@

$(NAME)	:	$(OBJS)
	make -C libft
# make -C libft/ft_printf
	$(CC) $(CFFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) $(LIB)

clean :
	rm -rf $(OBJS)
	make -C libft clean
# make -C libft/ft_printf clean

fclean : clean
	rm -rf $(NAME)
	make -C libft fclean
# make -C libft/ft_printf fclean

re : fclean all

.PHONY: all clean fclean re
