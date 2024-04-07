#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	validator(argc, argv);
	add_to_stack(&stack_a, argc, argv);
	set_index(&stack_a);
	size = stack_length(&stack_a);
	sort(&stack_a, &stack_b, size);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
