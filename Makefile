NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
UTILS_DIR = utils

SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/butterfly.c \
       $(SRC_DIR)/create_stack.c \
       $(SRC_DIR)/push.c \
       $(SRC_DIR)/reverse_rotate.c \
       $(SRC_DIR)/rotate.c \
       $(SRC_DIR)/swap.c \
       $(SRC_DIR)/tiny_sort.c \
       $(SRC_DIR)/validator.c \
       $(UTILS_DIR)/ft_atoi.c \
       $(UTILS_DIR)/ft_isdigit.c \
       $(UTILS_DIR)/ft_memmove.c \
       $(UTILS_DIR)/ft_split.c \
       $(UTILS_DIR)/ft_strchr.c \
       $(UTILS_DIR)/ft_strcmp.c \
       $(UTILS_DIR)/ft_strlen.c \
       $(UTILS_DIR)/utils.c		\
       $(UTILS_DIR)/utils1.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(NAME) $(OBJS)

fclean: clean
	$(RM) $(NAME)
