/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:34 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/08 18:48:44 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack **stack, int type)
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
	if (type == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stack, int type)
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
	if (type == 0)
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b, int type)
{
	ra(stack_a, type);
	rb(stack_b, type);
	if (type == 0)
		write(1, "rr\n", 3);
}
