#include "../include/push_swap.h"

int ft_log(int base, int num)
{
    int i = 0;
    while (num > 1) {
        num /= base;
        i++;
    }
    return i;
}

int ft_sqrt(int nb)
{
    long long i = 1;
    if (nb == 1)
        return 1;
    else if (nb < 0)
        return 0;
    while (i * i < nb) {
        if (i >= 46341)
            return 0;
        i++;
    }
    return i - 1;
}

int get_pos(t_stack *stack, int i)
{
    int pos;

    pos = 0;
    while (stack)
    {
        if (stack->index == i)
            return (pos);
        pos++;
        stack = stack->next;
    }
    return (-1);
}

void push_back(t_stack **stack_a, t_stack **stack_b, int size)
{
    int i;

    i = size - 1;
    while ((*stack_b))
    {
        if ((*stack_b)->index == i)
        {
            pa(stack_a, stack_b);
            i--;
            size--;
        }
        else if (get_pos(*stack_b, i) >= 1 + size / 2)
            rrb(stack_b);
        else if (get_pos(*stack_b, i) < 1 + size / 2)
            rb(stack_b);
    }
}

void butterfly(t_stack **stack_a, t_stack **stack_b, int size)
{
    int count;
    int offset;

    count = 0;
    offset = ft_log(2, size) + ft_sqrt(size);
    while ((*stack_a))
    {
        if ((*stack_a)->index <= offset)
        {
            pb(stack_a, stack_b);
            rb(stack_b);
            count++;
        }
        else if ((*stack_a)->index <= offset + count)
        {
            pb(stack_a, stack_b);
            count += 1;
        }
        else
            ra(stack_a);
    }
    push_back(stack_a, stack_b, size);
}