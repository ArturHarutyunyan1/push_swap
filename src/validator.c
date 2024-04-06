#include "../include/push_swap.h"

bool	validator(int argc, char **argv)
{
    int		i;
    int		j;
    char	**ret;

    i = 1;
    while (i < argc)
    {
        j = 0;
        ret = ft_split(argv[i], ' ');
        while (ret[j])
        {
            if (is_all_num(ret) || has_duplicate_string(ret)
                || has_duplicate(argc, argv))
            {
                exit(write(2, "Error\n", 6));
            }
            else
                j++;
        }
        free_split(ret);
        i++;
    }
    return (false);
}

bool	is_all_num(char **str)
{
    int	i;
    int	j;

    i = 0;
    while (str[i])
    {
        j = 0;
        if (str[i][0] == '-' && str[i][1] != '\0')
            j = 1;
        while (str[i][j])
        {
            if (!ft_isdigit(str[i][j]))
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}

bool	has_duplicate_string(char **str)
{
    int	i;
    int	j;

    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (ft_strcmp(str[i], str[j]) == 0)
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}

bool	has_duplicate(int argc, char **argv)
{
    int	i;
    int	j;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) == 0)
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}