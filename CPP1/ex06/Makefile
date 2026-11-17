CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = main.cpp \
			Harl.cpp

INCLUDES = Harl.hpp
OBJS_FILE = $(SRCS_FILE:.cpp=.o)
NAME = harlFilter

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
