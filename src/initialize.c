#include "../include/push_swap.h"

t_stack *create_node(int num)
{
    t_stack *new_node;

    new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
        return (NULL);
    new_node->num = num;
    new_node->prev = NULL;
    new_node->next = NULL;
    return (new_node);
}

void push(t_stack **stack, int num)
{
    t_stack *new_node;
    t_stack *temp;

    new_node = create_node(num);
    if (*stack == NULL)
        *stack = new_node;
    else
    {
        temp = *stack;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }
}

void add_to_stack(t_stack **stack_a, int argc ,char **argv)
{
    int i;
    int num;

    i = 1;
    while (i < argc)
    {
        num = ft_atoi(argv[i++]);
        push(stack_a, num);
    }
}