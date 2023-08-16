# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 05:03:29 by amessah           #+#    #+#              #
#    Updated: 2023/08/16 05:03:30 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Base

CC = c++

Header =  Base.hpp A.hpp B.hpp C.hpp
 
VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp	\
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \

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