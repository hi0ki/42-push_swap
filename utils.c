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
	int j = -1;
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
	int i = 0;
	int j = 0;

	i = find_max(*stack_a);
	j = find_min(*stack_a);
	if (i == 0)
		ft_rotate(stack_a, 'a');
	else if (i == 1)
		ft_rrotate(stack_a, 'a');
	if ((*stack_a)->data > (*stack_a)->next->data)
		ft_swap(stack_a, 'a');
}


int *double_algo(int *arr, int len)
{
	int i;
	int j;
	int save;

	i = 0;
	while(i < len)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if(arr[j] > arr[j + 1])
			{
				save = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = save;
			}
			j++;
		}
		i++;
	}
	return (arr);
}
