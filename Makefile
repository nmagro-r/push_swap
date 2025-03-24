NAME = push_swap

CC = cc 

CFLAGS = -Wall -Werror -Wextra -I. -I./libaux -I./printf -g3
LIBAUX_DIR = libaux
#PRINTF_DIR = ./printf
LIBS = -L $(LIBAUX_DIR) -L$(PRINTF_DIR) -lftprintf
SRCS = list/create_node.c list/get_biggest_node.c list/get_lenght_stack.c list/get_smallest_node.c list/node_add_end.c list/node_add_front.c list/node_get_last.c \
       movements/utils_push.c movements/utils_reverse_rotate.c movements/utils_rotate.c movements/utils_swap.c \
       parse/utils_parse.c main.c
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