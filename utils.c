#include "push_swap.h"

int find_max(t_list *stack)
{
	int i = 0;
	int j = 0;
	int tmp;

	tmp = stack->data;
	while (stack)
	{
		if (tmp < stack->data)
		{
			j = i;
			tmp = stack->data;
		}
		i++;
		stack = stack->next;
	}
	return (j);
}
int find_min(t_list *stack)
{
	int i = 0;
	int j = 0;
	int tmp;

	tmp = stack->data;
	while (stack)
	{
		if (tmp > stack->data)
		{
			j = i;
			tmp = stack->data;
		}
		i++;
		stack = stack->next;
	}
	return (j);
}

int sorted(t_list *stack)
{
	int i;

	while (stack->next)
	{
		i = stack->data;
		stack = stack->next;
		if (i > stack->data)
		{
			return 1;
		}
	}
	return 0;
}

void ft_three(t_list **stack_a)
{
	int i;
	int j;

	i = find_max(*stack_a);
	j = find_min(*stack_a);
	if (sorted(*stack_a) == 0)
		return ;
	if (i == 0 && j == 1)
		ft_rotate(stack_a, 'a');
	else if (i == 0 && j == 2)
	{
		ft_swap(stack_a, 'a');
		ft_rrotate(stack_a, 'a');
	}
	else if (i == 2 && j == 1)
		ft_swap(stack_a, 'a');
	else if (i == 2 && j == 1)
		ft_rotate(stack_a, 'a');
	else if (i == 1 && j == 0)
	{
		ft_swap(stack_a, 'a');
		ft_rotate(stack_a, 'a');
	}
	else if (i == 1 && j == 2)
		ft_rrotate(stack_a, 'a');
}

t_list *sort(t_list *stack)
{
	int tmp;
	t_list *skip;
	t_list *save;

	save = stack;
	while (save)
	{
		skip = save->next;
		while (skip)
		{
			if (save->data > skip->data)
			{
				tmp = save->data;
				save->data = skip->data;
				skip->data = tmp;
			}
			skip = skip->next;
		}
		save = save->next;
	}
	return (stack);
}