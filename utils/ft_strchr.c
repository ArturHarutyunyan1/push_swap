#include "../include/push_swap.h"

char	*ft_strchr(const char *str, int c)
{
    while ((char)c != *str)
    {
        if (!*str)
            return (0);
        str++;
    }
    return ((char *)str);
}