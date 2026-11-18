CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = main.cpp \
			Animal.cpp \
			Brain.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

INCLUDES = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
OBJS_FILE = $(SRCS_FILE:.cpp=.o)
NAME = out

all : $(NAME)

$(NAME) : $(OBJS_FILE)
	$(CPP) $(CFLAGS) $(OBJS_FILE) -o $@

%.o : %.cpp $(INCLUDES)
	$(CPP) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
