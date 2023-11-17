# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: canocent <canocent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 16:15:53 by canocent          #+#    #+#              #
#    Updated: 2023/10/13 14:38:21 by canocent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	
SRCS_GNL = gnl/get_next_line.c\
		gnl/get_next_line_utils.c\

SRCS_PRINTF = ft_printf/ft_printf.c\
			ft_printf/ft_putadd.c\
			ft_printf/ft_putchar.c\
			ft_printf/ft_puthexa.c\
			ft_printf/ft_putnbr.c\
			ft_printf/ft_putstr.c\
			ft_printf/ft_putunsigned.c
		
CC = cc

OBJS = ${SRCS:.c=.o} 
OBJS_GNL = ${SRCS_GNL:.c=.o}
OBJS_PRINTF = ${SRCS_PRINTF:.c=.o}
HEADER = libft.h
RM = rm -rfv
FLAGS = -Wall -Wextra -Werror


all: ${NAME}

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I./ft_printf

$(NAME): ${OBJS} ${OBJS_GNL} ${OBJS_PRINTF}
	ar cr ${NAME} ${OBJS} ${OBJS_GNL} ${OBJS_PRINTF}

clean:
	${RM} ${OBJS} $(OBJS_GNL) ${OBJS_PRINTF}

fclean: clean
	${RM} ${NAME}

re: 
	$(MAKE) fclean
	$(MAKE) all
