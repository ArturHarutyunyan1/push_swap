#include "../include/push_swap.h"

void	sort_2(t_stack **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}

void	sort_3(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

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

void sort_5(t_stack **stack_a, t_stack **stack_b, int size)
{
    int index;

    index = 0;
    while (size > 3)
    {
        if (get_pos((*stack_a), index) == 0)
        {
            pb(stack_a, stack_b);
            index++;
            size--;
        }
        else if (get_pos((*stack_a), index)  >= 1 + size / 2)
            rra(stack_a);
        else if (get_pos((*stack_a), index) < 1 + size / 2)
            ra(stack_a);
    }
    if (!is_sorted(*stack_a))
        sort_3(stack_a);
    while ((*stack_b))
        pa(stack_a, stack_b);
}