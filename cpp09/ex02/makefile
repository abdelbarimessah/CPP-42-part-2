NAME = PmergeMe

CC = c++

Header =  PmergeMe.hpp
 
VERSION = -std=c++98  -Wall -Wextra -Werror

SRC =	main.cpp \
		PmergeMe.cpp \

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