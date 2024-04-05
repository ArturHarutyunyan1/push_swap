#include "../include/push_swap.h"

void sort_2(t_stack **stack)
{
    if ((*stack)->num > (*stack)->next->num)
        sa(stack);
}

void sort_3(t_stack **stack)
{
    t_stack *first;
    t_stack *second;
    t_stack *third;

    first = (*stack);
    second = first->next;
    third = second->next;

    if (third->num < second->num && second->num < first->num)
    {
        sa(stack);
        rra(stack);
    }
    else if (first->num < third->num && second->num > third->num)
    {
        ra(stack);
        sa(stack);
        rra(stack);
    }
    else if (second->num < first->num && first->num < third->num)
        sa(stack);
    else if (first->num < second->num && third->num < first->num)
        rra(stack);
    else if (first->num > third->num && first->num > second->num)
        ra(stack);
}
