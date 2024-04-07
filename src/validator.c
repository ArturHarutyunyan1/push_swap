/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:43 by arturhar          #+#    #+#             */
/*   Updated: 2024/04/07 12:21:44 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

bool	validator(int argc, char **argv)
{
	int		i;
	int		j;
	char	**ret;

	i = 1;
	while (i < argc)
	{
		j = 0;
		ret = ft_split(argv[i], ' ');
		while (ret[j])
		{
			if (is_all_num(ret))
				print_error();
			else
				j++;
		}
		free_split(ret);
		i++;
	}
	return (false);
}

bool	is_all_num(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][0] == '-' && str[i][1] != '\0')
			j = 1;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void	check(t_stack **stack)
{
	t_stack	*cur;
	t_stack	*temp;

	cur = (*stack);
	while (cur)
	{
		temp = cur->next;
		while (temp)
		{
			if (cur->num == temp->num)
				print_error();
			temp = temp->next;
		}
		cur = cur->next;
	}
}
