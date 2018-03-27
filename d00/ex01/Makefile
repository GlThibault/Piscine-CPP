# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tglandai <tglandaistudent.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 11:26:03 by tglandai          #+#    #+#              #
#    Updated: 2018/03/26 11:26:03 by tglandai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp Contact.class.cpp

OBJ = phonebook.o Contact.class.o

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
