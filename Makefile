NAME = push_swap
BONUS_NAME = checker
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
BONUS_DIR = bonus
LIBFT_DIR = libft

SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/butterfly.c \
       $(SRC_DIR)/create_stack.c \
       $(SRC_DIR)/push.c \
       $(SRC_DIR)/reverse_rotate.c \
       $(SRC_DIR)/rotate.c \
       $(SRC_DIR)/swap.c \
       $(SRC_DIR)/sort.c \
       $(SRC_DIR)/validator.c \
       $(SRC_DIR)/utils.c
BONUS_SRC = $(BONUS_DIR)/bonus_sort.c \
            $(BONUS_DIR)/create_stack.c \
            $(BONUS_DIR)/push.c \
            $(BONUS_DIR)/reverse_rotate.c \
            $(BONUS_DIR)/rotate.c \
            $(BONUS_DIR)/swap.c \
            $(BONUS_DIR)/validator.c \
            $(BONUS_DIR)/checker.c
OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS_SRC:.c=.o)
LIBFT = $(LIBFT_DIR)/libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft

$(LIBFT):
	make -C $(LIBFT_DIR)

$(BONUS_NAME): $(BOBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(BONUS_NAME) $(BOBJS) -L$(LIBFT_DIR) -lft

all: $(NAME)

bonus: $(BONUS_NAME)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME) $(LIBFT)

re: fclean all

.PHONY: all re fclean clean bonus
