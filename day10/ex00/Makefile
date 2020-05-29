# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskinner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 15:09:45 by mskinner          #+#    #+#              #
#    Updated: 2020/03/09 15:45:27 by mskinner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c

HEAD = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(patsubst %, srcs/%, $(SRC)) -I $(HEAD)
	ar rc $(NAME) $(patsubst %.c,%.o,$(SRC))
	ranlib $(NAME)

clean:
	/bin/rm -f $(patsubst %.c,%.o,$(SRC))

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re  
