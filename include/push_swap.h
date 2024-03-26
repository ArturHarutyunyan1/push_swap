//
// Created by arturhar on 3/26/24.
//

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../ft_printf/include/ft_printf.h"
#include <stdbool.h>

typedef struct s_stack
{
    int num;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

int validator(int argc, char **argv);
int is_all_num(int argc, char **argv);
int has_duplicates(int argc, char **argv);

#endif