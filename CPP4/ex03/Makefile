CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \

INCLUDES = AMateria.hpp \
		   Character.hpp \
		   Cure.hpp \
		   Ice.hpp \
		   ICharacter.hpp \
		   IMateriaSource.hpp \
		   MateriaSource.hpp

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
