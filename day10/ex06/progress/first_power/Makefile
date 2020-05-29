# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 23:15:16 by mskinner          #+#    #+#              #
#    Updated: 2020/03/09 23:36:33 by mskinner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = main.c ft_operations1.c ft_operations2.c ft_str.c

HEADER = ft_calculator.h

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -include $(HEADER) 

clean:
	@rm -f $(NAME)

.PHONY: all clean