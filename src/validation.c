#include "../include/push_swap.h"

int validator(int argc, char **argv)
{
    if (is_all_num(argc, argv) || has_duplicates(argc, argv))
    {
        ft_printf("Error\n");
        return (true);
    }
    else if (argc <= 1)
    {
        ft_printf("\n");
        return (true);
    }
    return (false);
}

int is_all_num(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        if (argv[i][0] == '-' && argv[i][1] != '\0')
            j = 1;
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]))
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}

int has_duplicates(int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}