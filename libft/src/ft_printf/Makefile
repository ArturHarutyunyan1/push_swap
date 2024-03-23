NAME = libftprintf.a
SRCS := ft_printf.c \
		ft_format_parser.c \
		ft_printf_utils.c \
		ft_print_hex.c \
		libft/ft_strlen.c \
		libft/ft_itoa.c
OBJS = ${SRCS:.c=.o}

LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

bonus: ${OBJS} ${BONUS_OBJS}
	${LIBC} ${NAME} ${OBJS} ${BONUS_OBJS}


re: fclean all