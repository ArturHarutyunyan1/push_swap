#include "../include/push_swap.h"

void free_stack(t_stack **stack)
{
    t_stack *current;
    t_stack *next;

    current = (*stack);
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *stack = NULL;
}

void free_split(char **str)
{
    int i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

int stack_length(t_stack **stack)
{
    int count;
    t_stack *cur;

    count = 0;
    cur = (*stack);
    while (cur)
    {
        count++;
        cur = cur->next;
    }
    return (count);
}

void sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    if (size == 2)
        sort_2(stack_a);
    else if (size == 3)
        sort_3(stack_a);
    else if (size >= 5)
        butterfly(stack_a, stack_b, size);

}