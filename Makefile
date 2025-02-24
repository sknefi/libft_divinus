NAME		= libft.a

RED   		= \033[31m
GREEN 		= \033[32m
YELLOW		= \033[33m
BLUE  		= \033[34m
RESET 		= \033[0m

SRCS =  main.c \
		ft_conv/ft_atoi.c \
		ft_conv/ft_itoa.c \
		ft_conv/ft_tolower.c \
		ft_conv/ft_toupper.c \
		\
		ft_err/ft_error.c \
		\
		ft_is/ft_isalnum.c \
		ft_is/ft_isalpha.c \
		ft_is/ft_isascii.c \
		ft_is/ft_isdigit.c \
		ft_is/ft_isnumber.c \
		ft_is/ft_isprint.c \
		\
		ft_lst/ft_lstadd_back.c \
		ft_lst/ft_lstadd_front.c \
		ft_lst/ft_lstclear.c \
		ft_lst/ft_lstdelone.c \
		ft_lst/ft_lstiter.c \
		ft_lst/ft_lstlast.c \
		ft_lst/ft_lstmap.c \
		ft_lst/ft_lstnew.c \
		ft_lst/ft_lstsize.c \
		\
		ft_mem/ft_bzero.c \
		ft_mem/ft_calloc.c \
		ft_mem/ft_memchr.c \
		ft_mem/ft_memcmp.c \
		ft_mem/ft_memcpy.c \
		ft_mem/ft_memmove.c \
		ft_mem/ft_memset.c \
		ft_mem/ft_split.c \
		\
		ft_put/ft_putchar_fd.c \
		ft_put/ft_putendl_fd.c \
		ft_put/ft_putnbr_fd.c \
		ft_put/ft_putstr_fd.c \
		\
		ft_str/ft_strchr.c \
		ft_str/ft_strcmp.c \
		ft_str/ft_strdup.c \
		ft_str/ft_striteri.c \
		ft_str/ft_strjoin.c \
		ft_str/ft_strlcat.c \
		ft_str/ft_strlcpy.c \
		ft_str/ft_strlen.c \
		ft_str/ft_strmapi.c \
		ft_str/ft_strncmp.c \
		ft_str/ft_strnstr.c \
		ft_str/ft_strrchr.c \
		ft_str/ft_strtrim.c \
		ft_str/ft_substr.c \
		\
		ft_dll/dll_append.c \
		ft_dll/dll_clear.c \
		ft_dll/dll_delete.c \
		ft_dll/dll_create.c \
		ft_dll/dll_init.c \
		ft_dll/dll_iteri.c \
		ft_dll/dll_prepend.c \
		ft_dll/dll_printer.c \
		\
		ft_printf/ft_printf.c \
		ft_printf/ft_print_formats/ft_print_char.c \
		ft_printf/ft_print_formats/ft_print_number.c \
		ft_printf/ft_print_formats/ft_print_pointer.c \
		ft_printf/ft_print_formats/ft_print_string.c \
		\
		get_next_line/get_next_line_bonus.c \
		get_next_line/get_next_line_utils_bonus.c \
		
OBJS 		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
# @echo "$(YELLOW)Compiling $(NAME)$(RESET)"
# $(CC) $(CFLAGS) -o a.out $(OBJS)
# @echo "$(GREEN)$(NAME) compiled$(RESET)"
	@echo "$(YELLOW)Creating Library: $(NAME)$(RESET)"
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)SUCCESS: $(NAME) created$(RESET)"

clean:
	$(RM) $(OBJS)
	@echo "$(GREEN)SUCCESS:$(RESET) $(RED)cleaned $(NAME)$(RESET)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(GREEN)SUCCESS:$(RESET) $(RED)removed $(NAME)$(RESET)"

re: fclean all

e: all clean

.PHONY: all clean fclean re