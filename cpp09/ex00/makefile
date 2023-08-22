# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 22:54:11 by amessah           #+#    #+#              #
#    Updated: 2023/08/22 22:54:12 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++

Header =  BitcoinExchange.hpp
 
VERSION = -std=c++98  -Wall -Wextra -Werror

SRC =	main.cpp \
		BitcoinExchange.cpp \

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(CC) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header)
	$(CC) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all