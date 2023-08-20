NAME = Span

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		Span.cpp

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.hpp 
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf Span

re : fclean all