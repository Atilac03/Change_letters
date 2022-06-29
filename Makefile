CC	=	gcc

SRC	=	src/help.c 													\
		src/change_letters.c 										\
		src/parse_letters.c 										\
		src/check_if_change.c 										\

MAIN	=	main.c

OBJ	=	$(SRC:.c=.o)

OBJMAIN	=	$(MAIN:.c=.o)

CFLAGS += -Wall -Wextra -W

CPPFLAGS	=	-I./include

NAME	=	change_letters

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)	$(OBJMAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJMAIN) $(CFLAGS) $(LFLAGS) $(CPPFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJMAIN)

fclean:	clean
	$(RM) $(NAME)
	$(RM) *~

re: fclean all
