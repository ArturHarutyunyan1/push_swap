#include "../include/push_swap.h"

t_stack	*ft_lstnew(int num)
{
	t_stack	*str;

	str = (t_stack *)malloc(sizeof(t_stack));
	if (!str)
		return (NULL);
	str->num = num;
	str->next = NULL;
	return (str);
}

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
			j = -1;
			while (str[++j])
				push_to_stack(stack, ft_atoi(str[j]));
			free(str);
		}
		else
			push_to_stack(stack, ft_atoi(argv[i]));
	}
	check(stack);
}
