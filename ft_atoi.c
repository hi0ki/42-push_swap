#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	if (!str)
		return (0);
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_atoi(char *str)
{
	int						i;
	unsigned long long int	result;
	int						sign;

	if (!str)
		return (0);
	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		if (result > 9223372036854775807 && sign == 1)
			return (-1);
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (result * sign);
}
