#include "../include/push_swap.h"

void sa(t_stack **stack)
{
    int temp;

    if (*stack && (*stack)->next)
    {
        temp = (*stack)->num;
        (*stack)->num = (*stack)->next->num;
        (*stack)->next->num = temp;
    }
    ft_printf("sa\n");
}

void sb(t_stack **stack)
{
    sa(stack);
    ft_printf("sb\n");
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    ft_printf("ss\n");
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;

    if (*stack_b)
    {
        temp = *stack_b;
        *stack_b = (*stack_b)->next;
        if (*stack_b)
            (*stack_b)->prev = NULL;
        temp->next = *stack_a;
        temp->prev = NULL;
        if (*stack_a)
            (*stack_a)->prev = temp;
        *stack_a = temp;
    }
    ft_printf("pb\n");
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    pa(stack_b, stack_a);
    ft_printf("pb\n");
}

void ra(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if (*stack && (*stack)->next)
    {
        temp = *stack;
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
        last = temp;
        while (last->next)
            last = last->next;
        last->next = temp;
        temp->prev = last;
        temp->next = NULL;
    }
    ft_printf("ra\n");
}

void rb(t_stack **stack)
{
    ra(stack);
    ft_printf("rb\n");
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    ft_printf("rr\n");
}

void rra(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    if (*stack && (*stack)->next)
    {
        last = *stack;
        while (last->next)
            last = last->next;
        temp = last->prev;
        temp->next = NULL;
        last->prev = NULL;
        last->next = *stack;
        (*stack)->prev = last;
        *stack = last;
    }
    ft_printf("rra\n");
}

void rrb(t_stack **stack)
{
    rra(stack);
    ft_printf("rrb\n");
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    ft_printf("rrr\n");
}