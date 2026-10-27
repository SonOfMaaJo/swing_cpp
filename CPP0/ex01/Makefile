CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS_FILE = Contact.cpp \
			main.cpp \
			PhoneBook.cpp
INCLUDES = Contact.hpp \
		   PhoneBook.hpp
NAME = phonemanager

all : $(NAME)

$(NAME) : $(SRCS_FILE) $(INCLUDES)
	$(CPP) $(CFLAGS) $(SRCS_FILE) -o $@

clean :
	rm -f $(OBJS_FILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
