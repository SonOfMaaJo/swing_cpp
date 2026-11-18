CPP = c++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
SRCS_FILE = main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			DiamondTrap.cpp

INCLUDES = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
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
