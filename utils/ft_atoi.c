#include "../include/push_swap.h"

long long	ft_atoi(const char *str)
{
	long long	neg;
	long long	num;
	int			i;

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
	if (num * neg > INT_MAX || num * neg < INT_MIN)
		print_error();
	return (num * neg);
}
