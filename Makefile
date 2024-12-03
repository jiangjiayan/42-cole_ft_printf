CC = cc
CFLAGS = -Wall -Wextra -Werror -I./head/libft.h -I./head/ft_printf.h
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_printf.c src/ft_putstr.c src/ft_putadd.c src/ft_putint.c src/reverse_str.c src/ft_putunsigned.c src/ft_puthex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SILENT: