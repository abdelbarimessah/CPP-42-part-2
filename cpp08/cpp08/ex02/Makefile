NAME = Stack

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.hpp 
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf Stack

re : fclean all