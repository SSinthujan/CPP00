CC			= c++
RM			= rm -f
CPPFLAGS	= -Wextra -Wall -Werror -std=c++98
NAME 		= iPhone
SRCS		= PhoneBook.cpp Contact.cpp main.cpp
OBJ_DIR		= obj
OBJS 		= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all:		$(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
			$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS)

clean:
			$(RM) $(OBJS)
			$(RM) -r $(OBJ_DIR)

fclean:	 	clean
			$(RM) $(NAME)

re:			fclean
			$(MAKE) all

.PHONY:		all clean fclean re