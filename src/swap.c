#include "../include/push_swap.h"

void sa(t_stack **stack)
{
    int temp;

    if ((*stack) && (*stack)->next)
    {
        temp = (*stack)->num;
        (*stack)->num = (*stack)->next->num;
        (*stack)->next->num = temp;
    }
    write(1, "sa\n", 3);
}

void sb(t_stack **stack)
{
    int temp;

    if ((*stack) && (*stack)->next)
    {
        temp = (*stack)->num;
        (*stack)->num = (*stack)->next->num;
        (*stack)->next->num = temp;
    }
    write(1, "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    write(1, "ss\n", 3);
}