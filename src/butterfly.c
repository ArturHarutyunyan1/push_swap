/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:20:29 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/08 18:47:11 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		if (i >= 46341)
			return (0);
		i++;
	}
	return (i - 1);
}

int	get_pos(t_stack *stack, int i)
{
	int	pos;

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

void	push_back(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = size - 1;
	while ((*stack_b))
	{
		if ((*stack_b)->index == i)
		{
			pa(stack_a, stack_b, 0);
			i--;
			size--;
		}
		else if (get_pos(*stack_b, i) >= 1 + size / 2)
			rrb(stack_b, 0);
		else if (get_pos(*stack_b, i) < 1 + size / 2)
			rb(stack_b, 0);
	}
}

void	butterfly(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	count;
	int	offset;

	count = 0;
	offset = ft_sqrt(size);
	while (*stack_a)
	{
		if ((*stack_a)->index <= count)
		{
			pb(stack_a, stack_b, 0);
			rb(stack_b, 0);
			count++;
		}
		else if ((*stack_a)->index <= offset + count)
		{
			pb(stack_a, stack_b, 0);
			count++;
		}
		else
			ra(stack_a, 0);
	}
	push_back(stack_a, stack_b, size);
}
