/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:39 by arturhar          #+#    #+#             */
/*   Updated: 2024/04/07 12:21:40 by arturhar         ###   ########.fr       */
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
	write(1, "sa\n", 3);
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
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
