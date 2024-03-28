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

void push(t_stack **stack, int num);
void add_to_stack(t_stack **stack_a, int argc ,char **argv);
void sa(t_stack **stack);
void sb(t_stack **stack);
void ss(t_stack **stack_a, t_stack **stack_b);
void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_a, t_stack **stack_b);
void ra(t_stack **stack);
void rb(t_stack **stack);
void rr(t_stack **stack_a, t_stack **stack_b);
void rra(t_stack **stack);
void rrb(t_stack **stack);
void rrr(t_stack **stack_a, t_stack **stack_b);

t_stack *create_node(int num);

#endif