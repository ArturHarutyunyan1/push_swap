#include "../include/push_swap.h"

void ra(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if ((*stack) && (*stack)->next)
    {
        temp = (*stack);
        (*stack) = (*stack)->next;
        last = temp;
        while (last->next)
            last = last->next;
        last->next = temp;
        temp->next = NULL;
    }
    write(1, "ra\n", 3);
}

void rb(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if ((*stack) && (*stack)->next)
    {
        temp = (*stack);
        (*stack) = (*stack)->next;
        last = temp;
        while (last->next)
            last = last->next;
        last->next = temp;
        temp->next = NULL;
    }
    write(1, "rb\n", 3);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    write(1, "rr\n", 3);
}