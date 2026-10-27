CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = Account.cpp \
			tests.cpp
INCLUDES = Account.hpp
NAME = maccount

all : $(NAME)

$(NAME) : $(SRCS_FILE) $(INCLUDES)
	$(CPP) $(CFLAGS) $(SRCS_FILE) -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f 20*.log
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
