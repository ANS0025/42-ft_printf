NAME = libftprintf.a
LIBFTNAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFTDIR = ./libft
SRCS = \
	ft_printf.c ft_parse.c ft_putchar.c ft_puthex.c ft_puthexupper.c \
	ft_putnbr.c ft_putptr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
