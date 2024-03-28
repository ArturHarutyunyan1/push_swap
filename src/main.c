#include "../include/push_swap.h"

void display_stack(t_stack *stack)
{
    printf("Stack content:\n");
    while (stack != NULL)
    {
        printf("%d ", stack->num);
        stack = stack->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;
    add_to_stack(&stack_a, argc, argv);
    sort_stack(&stack_a, &stack_b);
    display_stack(stack_a);
    return 0;
}