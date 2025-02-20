/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:26:28 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 00:07:06 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = (*stack);
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

void free_split(char **split)
{
    int i = 0;
    if (!split)
        return;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

int	stack_length(t_stack **stack)
{
	int		count;
	t_stack	*cur;

	count = 0;
	cur = (*stack);
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return (count);
}

void	print_error(void)
{
	exit(write(2, "Error\n", 6));
}