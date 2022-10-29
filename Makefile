NAME    := libftprintf.a

CC      := cc

SRCS    := ft_printf.c put_char.c put_nb.c print_hex.c print_unsigned.c\
				print_pointer.c print_str.c put_percent.c \
				ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c \
				ft_calloc.c ft_strdup.c ft_itoa.c

OBJS    := $(SRCS:%.c=%.o)

CFLAGS  := -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):$(OBJS)
		@ar rcs $(NAME) $(OBJS)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re