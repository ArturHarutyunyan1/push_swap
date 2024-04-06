#include "../include/push_swap.h"

void check(t_stack **stack)
{
    t_stack *cur;
    t_stack *temp;

    cur = (*stack);
    while (cur)
    {
        temp = cur->next;
        while (temp)
        {
            if (cur->num == temp->num)
                exit(write(2, "Error\n", 6));
            temp = temp->next;
        }
        cur = cur->next;
    }
}

void	max_range(int argc, char **argv)
{
    int			i;
    int			j;
    long long	n;
    char		**str;

    i = 0;
    while (++i < argc)
    {
        if (ft_strchr(argv[i], ' '))
        {
            str = ft_split(argv[i], ' ');
            j = -1;
            while (str[++j])
            {
                n = ft_atoi(str[j]);
                if (n > INT_MAX || n < INT_MIN)
                    exit(write(2, "Error\n", 6));
            }
            free(str);
        }
        else
        {
            n = ft_atoi(argv[i]);
            if (n > INT_MAX || n < INT_MIN)
                exit(write(2, "Error\n", 6));
        }
    }
}