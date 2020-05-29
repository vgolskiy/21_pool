# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 11:56:52 by mskinner          #+#    #+#              #
#    Updated: 2020/03/12 16:21:13 by mskinner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

HEADER = ft_str.h

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -include $(HEADER)

clean:
	@rm -f $(patsubst %.c, %.o, $(SRC))

fclean: clean
	@rm -f $(NAME)

.PHONY: all clean fclean
