/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:20:41 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/08 19:02:46 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_to_stack(t_stack **stack, int num)
{
	t_stack	*node;
	t_stack	*temp;

	node = ft_lstnew(num);
	if ((*stack) == NULL)
		(*stack) = node;
	else
	{
		temp = (*stack);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
}

void	set_index(t_stack **stack)
{
	t_stack	*cur;
	t_stack	*ptr;

	ptr = (*stack);
	while (ptr)
	{
		ptr->index = 0;
		ptr = ptr->next;
	}
	cur = (*stack);
	while (cur)
	{
		ptr = (*stack);
		while (ptr)
		{
			if (cur->num > ptr->num)
				cur->index += 1;
			ptr = ptr->next;
		}
		cur = cur->next;
	}
}

void	add_to_stack(t_stack **stack, int argc, char **argv)
{
	int			i;
	int			j;
	char		**str;

	i = 0;
	while (++i < argc)
	{
		if (ft_strchr(argv[i], ' '))
		{
			str = ft_split(argv[i], ' ');
			if (!str)
				print_error();
			j = -1;
			while (str[++j])
				push_to_stack(stack, ft_atoi(str[j]));
			free_split(str);
		}
		else
			push_to_stack(stack, ft_atoi(argv[i]));
	}
	set_index(stack);
	check(stack);
}
