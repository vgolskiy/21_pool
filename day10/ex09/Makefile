# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 23:15:16 by mskinner          #+#    #+#              #
#    Updated: 2020/03/10 19:05:18 by mskinner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRC = main.c ft_operations.c ft_str.c

HEADER = ft_calculator.h ft_opp.h ft_struct.h 

all: $(HEADER) $(SRC)
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	@rm -f $(NAME)

.PHONY: all clean