NAME = push_swap

CC = cc 

CFLAGS = -Wall -Werror -Wextra -I. -I./libaux -I./printf -g3
LIBAUX_DIR = libaux
#PRINTF_DIR = ./printf
LIBS = -L $(LIBAUX_DIR) -L$(PRINTF_DIR) -lftprintf
SRCS =	main.c\
		list/create_node.c\
		list/get_biggest_node.c\
		list/get_smallest_node.c\
		list/node_add_end.c\
		list/node_add_front.c\
		list/node_get_last.c\
		list/stack_len.c\
    	movements/utils_push.c\
		movements/utils_reverse_rotate.c\
		movements/utils_rotate.c\
		movements/utils_swap.c\
    	parse/utils_parse.c\
		push_swap_utils/count_argv.c\
		push_swap_utils/free_array.c\
		push_swap_utils/free_list.c\
		push_swap_utils/fun_error.c\
		push_swap_utils/insert_stack.c\
		push_swap_utils/put_index.c\
		push_swap_utils/sorted_list.c\
		algorithms_utils/utils_sorts.c\
		algorithms_utils/ksort.c\
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
#	make -s -C $(PRINTF_DIR)
	make -s -C $(LIBAUX_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS) libaux/libaux.a

%.o: %.c pushswap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -s -C $(LIBAUX_DIR) clean
#	make -s -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re