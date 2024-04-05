#include "../include/push_swap.h"

void display(t_stack **stack)
{
    t_stack *cur;

    cur = (*stack);

    while (cur)
    {
        printf("%d ", cur->num);
        cur = cur->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    validator(argc, argv);
    stack_a = NULL;
    stack_b = NULL;
    add_to_stack(&stack_a, argc, argv);
    sa(&stack_a);
    display(&stack_a);
}