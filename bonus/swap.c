/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:39 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 01:18:09 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack **stack)
{
	int	temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
}

void	sb(t_stack **stack)
{
	int	temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
