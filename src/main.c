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

int stack_length(t_stack **stack)
{
    int count;
    t_stack *cur;

    count = 0;
    cur = (*stack);
    while (cur)
    {
        count++;
        cur = cur->next;
    }
    return (count);
}

void sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    if (size == 2)
        sort_2(stack_a);
    else if (size == 3)
        sort_3(stack_a);
    else if (size >= 5)
        butterfly(stack_a, stack_b, size);

}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int size;

    validator(argc, argv);
    stack_a = NULL;
    stack_b = NULL;
    add_to_stack(&stack_a, argc, argv);
    size = stack_length(&stack_a);
    sort(&stack_a, &stack_b, size);
}