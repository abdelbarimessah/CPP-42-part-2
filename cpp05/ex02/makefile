# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 01:54:31 by amessah           #+#    #+#              #
#    Updated: 2023/08/15 01:54:32 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++

Header = 	Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp


VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	AForm.cpp \
		Bureaucrat.cpp \
		main.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

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