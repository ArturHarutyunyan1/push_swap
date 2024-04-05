#include "../../include/push_swap.h"

void rra(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if ((*stack) && (*stack)->next)
    {
        last = (*stack);
        while (last->next->next)
            last = last->next;
        temp = last->next;
        last->next = NULL;
        temp->next = (*stack);
        (*stack) = temp;
    }
    write(1, "rra\n", 4);
}

void rrb(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if ((*stack) && (*stack)->next)
    {
        last = (*stack);
        while (last->next->next)
            last = last->next;
        temp = last->next;
        last->next = NULL;
        temp->next = (*stack);
        (*stack) = temp;
    }
    write(1, "rrb\n", 4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    write(1, "rrr\n", 4);
}