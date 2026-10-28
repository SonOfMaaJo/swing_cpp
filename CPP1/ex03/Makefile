CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

INCLUDES = Weapon.hpp \
		   HumanA.hpp \
		   HumanB.hpp

NAME = out

all : $(NAME)

$(NAME) : $(SRCS_FILE) $(INCLUDES)
	$(CPP) $(CFLAGS) $(SRCS_FILE) -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
