NAME		=	dll.a

SRCS		=	dll_append.c dll_clear.c dll_create.c dll_init.c \
				dll_iteri.c dll_prepend.c dll_printer.c

OBJS		=	$(SRCS:.c=.o)

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

all:		$(NAME)
			$(CC) $(CFLAGS) $(OBJS) 

$(NAME):	$(OBJS)	
			ar rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.phony:		all clean fclean re