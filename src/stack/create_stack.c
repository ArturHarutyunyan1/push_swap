#include "../../include/push_swap.h"

t_stack 	*ft_lstnew(int num)
{
    t_stack 	*str;

    str = (t_stack *)malloc(sizeof(t_stack));
    if (!str)
        return (NULL);
    str->num = num;
    str->next = NULL;
    return (str);
}

void push_to_stack(t_stack **stack, int num)
{
    t_stack *node;
    t_stack *temp;

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

void add_to_stack(t_stack **stack, int argc, char **argv)
{
    int i;
    int j;
    int num;
    char **str;

    i = 1;
    while (i < argc)
    {
        if (ft_strchr(argv[i], ' '))
        {
            str = ft_split(argv[i], ' ');
            j = 0;
            while (str[j])
            {
                num = ft_atoi(str[j]);
                push_to_stack(stack, num);
                j++;
            }
            free (str);
        }
        else
        {
            num = ft_atoi(argv[i]);
            push_to_stack(stack, num);
        }
        i++;
    }
}