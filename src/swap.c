/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:39 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/08 18:50:20 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack **stack, int type)
{
	int	temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
	if (type == 0)
		write(1, "sa\n", 3);
}

void	sb(t_stack **stack, int type)
{
	int	temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
	if (type == 0)
		write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b, int type)
{
	sa(stack_a, type);
	sb(stack_b, type);
	if (type == 0)
		write(1, "ss\n", 3);
}
