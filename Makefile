# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 11:22:49 by bmsimang          #+#    #+#              #
#    Updated: 2018/06/04 16:21:10 by bmsimang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CSRC = *.c
OSRC = *.o
HEADER = libft.h
FLAGS = -c -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(CSRC)
	ar -rc $(NAME) $(OSRC)

clean:
	rm -rf $(OSRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all

