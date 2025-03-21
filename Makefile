NAME = push_swap

CC = cc 

CFLAGS = -Wall -Werror -Wextra -I push_swap.h -I./libaux -I./printf
LIBAUX_DIR = ./libaux
PRINTF_DIR = ./printf
LIBS = -L $(LIBAUX_DIR) -lft -L$(PRINTF_DIR) -lftprintf
SRCS = list/create_node.c list/get_biggest_node.c list/get_lenght_stack.c list/get_smallest_node.c list/node_add_end.c list/node_add_front.c list/node_get_last.c \
		movements/utils_push.c movements/utils_reverse_rotate.c movements/utils_rotate.c movements/utils_swap.c\
		parse/utils_parse.c main.c
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	make -s -C $(PRINTF_DIR)
	make -s -C $(LIBAUX_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)
%.o: %.c includes/push_swap.h
	$(CC) $(CFLAGS) -I push_swap.h -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJ)
	make -s -C $(LIBFT_DIR) clean
	make -s -C $(PRINT_DIR) clean

fclean: clean
	make -s -C $(LIBFT_DIR) fclean
	make -s -C $(PRINT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re