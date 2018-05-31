# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 11:22:49 by bmsimang          #+#    #+#              #
#    Updated: 2018/05/31 11:46:01 by bmsimang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = libft.a

CFLAG = -Wall -Wextra -Werror

OBJ  = *.c

SRC = *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	gcc $(CFLAG) -c $*.c
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
