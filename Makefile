# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 11:22:49 by bmsimang          #+#    #+#              #
#    Updated: 2018/06/04 11:48:29 by bmsimang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJ = *.o
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
