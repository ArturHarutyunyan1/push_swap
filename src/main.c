/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:20:55 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 00:23:03 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void print_stack(t_stack *stack)
// {
// 	while (stack)
// 	{
// 		ft_printf("%d\n", stack->num);
// 		stack = stack->next;
// 	}
// }

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	validator(argc, argv);
	add_to_stack(&stack_a, argc, argv);
	size = stack_length(&stack_a);
	sort(&stack_a, &stack_b, size);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
