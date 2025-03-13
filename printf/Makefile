
NAME = libftprintf.a

FLAG = -Wall -Werror -Wextra

CFILES = ft_strlen.c ft_putstr.c ft_putnbrnu.c ft_putnbr.c ft_putchar.c\
		ft_hexadec.c ft_pointer_hex.c ft_printf.c

OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJS)
		
fclean: clean
	rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re
		