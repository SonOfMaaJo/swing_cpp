CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

INCLUDES = Zombie.hpp
NAME = zom

all : $(NAME)

$(NAME) : $(SRCS_FILE) $(INCLUDES)
	$(CPP) $(CFLAGS) $(SRCS_FILE) -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
