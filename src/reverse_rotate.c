/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:32 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/08 18:50:59 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stack **stack, int type)
{
	t_stack	*temp;
	t_stack	*last;

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
	if (type == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **stack, int type)
{
	t_stack	*temp;
	t_stack	*last;

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
	if (type == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b, int type)
{
	rra(stack_a, type);
	rrb(stack_b, type);
	if (type == 0)
		write(1, "rrr\n", 4);
}
