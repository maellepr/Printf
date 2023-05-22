# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 12:40:05 by mapoirie          #+#    #+#              #
#    Updated: 2023/05/22 09:02:51 by mapoirie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
SRC = ft_printf.c\
ft_hexa.c\
ft_nb_deci.c\
ft_percent.c\
ft_putchar.c\
ft_putstr.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $@ $^

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus