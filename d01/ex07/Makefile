# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 17:16:59 by tglandai          #+#    #+#              #
#    Updated: 2018/03/28 17:17:16 by tglandai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = replace.cpp

OBJ = replace.o

CC = clang++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $< $(CPPFLAGS) -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
