# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falupine <falupine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 15:30:39 by falupine          #+#    #+#              #
#    Updated: 2018/08/22 16:25:34 by falupine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc -Wall -Wextra -Werror
SRCS = ./srcs/ft_print_words_tables0.c	\
	   ./srcs/ft_putchar.c				\
	   ./srcs/ft_putstr.c				\
	   ./srcs/ft_read.c					\
	   ./srcs/main.c					\
	   ./srcs/alg_demineur.c			\
	   ./srcs/get_params.c				\
	   ./srcs/ft_atoi.c					\
	   ./srcs/parse_dem.c				\
	   ./srcs/ft_file.c
HEADERS = ./includes
OBJ = ./ft_print_words_tables0.o	\
	   ./ft_putchar.o				\
	   ./ft_putstr.o				\
	   ./ft_read.o					\
	   ./main.o						\
	   ./alg_demineur.o				\
	   ./get_params.o				\
	   ./ft_atoi.o					\
	   ./parse_dem.o				\
	   ./ft_file.o

all: objs
	$(CC) -o $(NAME) $(OBJ) -I $(HEADERS)

objs:
	$(CC) -c $(SRCS) -I $(HEADERS)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
