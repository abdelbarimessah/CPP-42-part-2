NAME = Span

CC = c++

Header =  Span.hpp
 
VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp \
		Span.cpp \

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(CC) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp 
	$(CC) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all