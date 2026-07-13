CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = $(shell find . -name "*.cpp")
NAME = megaphone

all : $(NAME)

$(NAME) :
	$(CPP) $(CFLAGS) $(SRCS_FILE) -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
