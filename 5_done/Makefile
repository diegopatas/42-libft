# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 23:21:37 by ddiniz            #+#    #+#              #
#    Updated: 2022/04/26 22:37:33 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC		= $(wildcard *.c)
B_SRC	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
OBJ		= $(SRC:%.c=%.o)
B_OBJ	= $(B_SRC:.c=.o)
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(B_OBJ)
	ar -rc $(NAME) $^

.PHONY: all clean fclean re
clean: ; rm -rf $(OBJ)
fclean: clean; rm -rf $(NAME)
re: fclean all
