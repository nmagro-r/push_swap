NAME = libaux.a

CC = cc

CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
    	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
    	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
    	ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c\
		ft_atoi.c ft_is_sign.c ft_atol.c ft_sqrt.c

HEADERS_DIR = /

OBJS = $(CFILES:.c=.o)

OBJS_B = $(BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g3 -I $(HEADERS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "creando objetos..."
	
bonus: $(OBJS) $(OBJS_B)
	@ar rc $(NAME) $(OBJS) $(OBJS_B)
	@echo "creando objetos totales..."

clean:
	@rm -f $(OBJS) $(OBJS_B)
	@echo "limpiando los objetos..."

fclean: clean
	@rm -f $(NAME)
	@echo "limpiando $(NAME)"

re: fclean all

exe: all clean
	@./$(NAME)
	@rm -f $(NAME)

.PHONY: all clean fclean re exe