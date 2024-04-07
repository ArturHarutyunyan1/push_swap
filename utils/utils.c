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

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
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

void print_error(void)
{
    exit(write(2, "Error\n", 6));
}