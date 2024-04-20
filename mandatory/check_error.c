#include "push_swap.h"
#include <stdio.h>

void    check_char(char **str)
{
	int	i;
	int	j;

	if (!str)
		exit(EXIT_FAILURE);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] < '0' || str[i][j] > '9')
			{
				puterror("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	check_num(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp_stack;

	tmp_stack = *stack;
	while (tmp_stack)
	{
		tmp = tmp_stack->next;
		while (tmp)
		{
			if (tmp_stack->data == tmp->data)
			{
				puterror("Error\n");
				while (1);
				exit(EXIT_FAILURE);
			}
			tmp = tmp->next;
		}
		tmp_stack = tmp_stack->next;
	}
}