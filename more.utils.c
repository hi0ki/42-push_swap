#include "push_swap.h"

t_list *ft_last(t_list *head)
{
	t_list *tmp = NULL;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
t_list *ft_blast(t_list *head)
{
	t_list *tmp = NULL;

	tmp = head;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

int *sort_arr(t_list *stack)
{
	int i = 0;
	int len = ft_lstsize(stack);
	int *arr;

	arr = malloc(len * sizeof(int));
	if (!arr)
		return 0;
	while (i < len)
	{
		arr[i] = stack->data;
		stack = stack->next;
		i++;
	}
	arr = double_algo(arr, len);
	return arr;
}

// void print(int *arr, int count)
// {
// 	int i = 0;
// 	while (i < count)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }
void set_index(t_list **stack_a)
{
	int j;
	int *arr;
	t_list *skip;

	arr = sort_arr(*stack_a);
	skip = *stack_a;
	while (skip)
	{
		j = 0;
		while (j < ft_lstsize(*stack_a))
		{
			if (arr[j] == skip->data)
			{
				skip->index = j;
				break;
			}
			j++;
		}
		skip = skip->next;
	}
}