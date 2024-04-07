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

void	sort_5(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	index;

	index = 0;
	while (size > 3)
	{
		if (get_pos((*stack_a), index) == 0)
		{
			pb(stack_a, stack_b);
			index++;
			size--;
		}
		else if (get_pos((*stack_a), index) >= 1 + size / 2)
			rra(stack_a);
		else if (get_pos((*stack_a), index) < 1 + size / 2)
			ra(stack_a);
	}
	if (!is_sorted(*stack_a))
		sort_3(stack_a);
	while ((*stack_b))
		pa(stack_a, stack_b);
}

int	is_sorted(t_stack *stack)
{
	t_stack	*cur;

	cur = stack;
	while (cur)
	{
		if (cur->num > cur->next->num)
			return (0);
		current = current->next;
	}
	return (1);
}

void	sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (is_sorted(*stack_a))
		return ;
	else if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 5)
		sort_5(stack_a, stack_b, size);
	else
		butterfly(stack_a, stack_b, size);
}
