#include "../../include/push_swap.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char		*d;
    const char	*s;
    size_t		i;

    i = 0;
    d = (char *)dest;
    s = (const char *)src;
    if (dest == src)
        return (dest);
    if (d > s)
    {
        while (n-- > 0)
            d[n] = s[n];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}