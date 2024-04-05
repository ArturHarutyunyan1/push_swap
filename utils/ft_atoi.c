#include "../include/push_swap.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] == ' ' || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\f') || str[i] == '\r'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
