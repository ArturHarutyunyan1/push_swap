/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:32 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 01:17:41 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stack **stack)
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
}

void	rrb(t_stack **stack)
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
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
