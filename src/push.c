/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:27 by arturhar          #+#    #+#             */
/*   Updated: 2024/04/07 12:21:28 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b)
	{
		temp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		temp->next = (*stack_a);
		(*stack_a) = temp;
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a)
	{
		temp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		temp->next = (*stack_b);
		(*stack_b) = temp;
	}
	write(1, "pb\n", 3);
}
