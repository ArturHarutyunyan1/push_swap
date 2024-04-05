#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct s_stack
{
    int num;
    int index;
    struct s_stack *next;
} t_stack;

// Function prototypes
t_stack *ft_lstnew(int num);

// Stack manipulation functions
void push_to_stack(t_stack **stack, int num);
void set_index(t_stack **stack);
void add_to_stack(t_stack **stack, int argc, char **argv);
void free_stack(t_stack **stack);

// Stack operation functions
void sa(t_stack **stack);
void sb(t_stack **stack);
void ss(t_stack **stack_a, t_stack **stack_b);
void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_a, t_stack **stack_b);
void ra(t_stack **stack_a);
void rb(t_stack **stack);
void rr(t_stack **stack_a, t_stack **stack_b);
void rra(t_stack **stack);
void rra(t_stack **stack);
void rrb(t_stack **stack);
void rrr(t_stack **stack_a, t_stack **stack_b);

// Helper functions
void *ft_memmove(void *dest, const void *src, size_t n);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int c);
int ft_isdigit(int c);
int ft_strcmp(const char *str1, const char *str2);
int ft_atoi(const char *str);
bool validator(int argc, char **argv);
bool is_all_num(char **str);
bool has_duplicate_string(char **str);
bool has_duplicate(int argc, char **argv);
void free_split(char **str);
size_t ft_strlen(const char *str);

// Sorting algorithms
void sort_2(t_stack **stack);
void sort_3(t_stack **stack);
void sort(t_stack **stack_a, t_stack **stack_b, int size);
int ft_log(int base, int num);
int ft_sqrt(int nb);
int get_pos(t_stack *stack, int i);
void push_back(t_stack **stack_a, t_stack **stack_b, int size);
void butterfly(t_stack **stack_a, t_stack **stack_b, int size);
int stack_length(t_stack **stack);

#endif
