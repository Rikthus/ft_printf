CC = clang
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

SRCS=	ft_printf.c \
		ft_search_type.c \
		ft_utils.c \
		ft_print_char.c \
		ft_print_string.c \
		ft_print_pointer.c \
		ft_print_decimal.c \
		ft_print_integer.c \
		ft_print_unsigned.c \
		ft_print_smallhex.c \
		ft_print_bighex.c

OBJS = $(SRCS:.c=.o)

INCS = ft_printf.h

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c $(INCS)
		$(CC) $(CFLAGS) -c -o $@ $<

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
