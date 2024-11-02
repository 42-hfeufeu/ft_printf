NAME = libftprintf.a
SRCS = ft_printf.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_uputnbr.c \
	   ft_pointprint.c \
	   ft_puthexa.c \

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	$(CC) $(CFLAGS) -c $^

all:	$(OBJS) $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean;
	rm -f $(NAME)

re:	fclean all
