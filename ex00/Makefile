CC			= c++
RM			= rm -f
CPPFLAGS	= -Wextra -Wall -Werror -std=c++98
NAME 		= megaphone
SRCS		= MegaPhone.cpp
OBJS 		= $(SRCS:.cpp=.o)

all:		$(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS)

clean:
			$(RM) $(OBJS)

fclean:	 	clean
			$(RM) $(NAME)

re:			fclean
			$(MAKE) all

.PHONY:		all clean fclean re