/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:34 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 01:17:53 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		last = temp;
		while (last->next)
			last = last->next;
		last->next = temp;
		temp->next = NULL;
	}
}

void	rb(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		last = temp;
		while (last->next)
			last = last->next;
		last->next = temp;
		temp->next = NULL;
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
