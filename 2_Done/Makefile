# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 23:21:37 by ddiniz            #+#    #+#              #
#    Updated: 2022/04/17 20:15:00 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC		= $(wildcard *.c)
OBJ		= $(SRC:%.c=%.o)
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: all clean fclean re
clean: ; rm -rf $(OBJ)
fclean: clean; rm -rf $(NAME)
re: fclean all
