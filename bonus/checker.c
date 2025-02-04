#include "../include/push_swap.h"

static bool isValid(char *str)
{
    char *trim;

    trim = ft_strtrim(str, " \t");
    if (ft_strncmp(trim, "sa\n", 3) == 0
        || ft_strncmp(trim, "sb\n", 3) == 0
        || ft_strncmp(trim, "ss\n", 3) == 0
        || ft_strncmp(trim, "pa\n", 3) == 0
        || ft_strncmp(trim, "pb\n", 3) == 0
        || ft_strncmp(trim, "ra\n", 3) == 0
        || ft_strncmp(trim, "rb\n", 3) == 0
        || ft_strncmp(trim, "rr\n", 3) == 0
        || ft_strncmp(trim, "rra\n", 4) == 0
        || ft_strncmp(trim, "rrb\n", 4) == 0
        || ft_strncmp(trim, "rrr\n", 4) == 0)
        {
            free (trim);
            return (true);
        }
    free (trim);
    return (false);
}

static void performOperation(char *input, t_stack *stack_a, t_stack *stack_b)
{
    if (ft_strncmp(input, "sa\n", 3) == 0)
        sa(&stack_a);
    else if (ft_strncmp(input, "sb\n", 3) == 0)
        sb(&stack_b);
    else if (ft_strncmp(input, "ss\n", 3) == 0)
        ss(&stack_a, &stack_b);
    else if (ft_strncmp(input, "pa\n", 3) == 0)
        pa(&stack_a, &stack_b);
    else if (ft_strncmp(input, "pb\n", 3) == 0)
        pb(&stack_a, &stack_b);
    else if (ft_strncmp(input, "ra\n", 3) == 0)
        ra(&stack_a);
    else if (ft_strncmp(input, "rb\n", 3) == 0)
        rb(&stack_b);
    else if (ft_strncmp(input, "rr\n", 3) == 0)
        rr(&stack_a, &stack_b);
    else if (ft_strncmp(input, "rra\n", 4) == 0)
        rra(&stack_a);
    else if (ft_strncmp(input, "rrb\n", 4) == 0)
        rrb(&stack_b);
    else if (ft_strncmp(input, "rrr\n", 4) == 0)
        rrr(&stack_a, &stack_b);
}

void read_input(t_stack *a, t_stack *b)
{
    char *input;

    while (1)
    {
        input = get_next_line(0);
        if (input == NULL)
            break;
        if (!isValid(input))
        {
            free (input);
            exit (1 && write(2, "Error\n", 6));
        }
        performOperation(input, a, b);
        free (input);
    }
}

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    if (argc > 1)
    {
        a = NULL;
        b = NULL;
        validator(argc, argv);
        add_to_stack(&a, argc, argv);    
        read_input(a, b);
        if (is_sorted(a))
            write(1, "OK\n", 3);
        else
            write(1, "KO\n", 3);
    }
}