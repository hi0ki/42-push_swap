/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:38:10 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:38:12 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*double_algo(int *arr, int len)
{
	int	i;
	int	j;
	int	save;


	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (arr[j] > arr[j + 1])
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

static int	*sort_arr(t_list *stack)
{
	int	i;
	int	len;
	int	*arr;

	len = ft_lstsize(stack);
	i = 0;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (0);
	while (i < len)
	{
		arr[i] = stack->data;
		stack = stack->next;
		i++;
	}
	arr = double_algo(arr, len);
	return (arr);
}

static int	get_value(t_list *stack_a, int index)
{
	int	i;

	i = 0;
	if (!stack_a)
		return (0);
	while (i < index && stack_a != NULL)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (stack_a->data);
}

void	set_index(t_list **stack_a)
{
	int		j;
	int		*arr;
	t_list	*skip;

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
				break ;
			}
			j++;
		}
		skip = skip->next;
	}
	free(arr);
	arr = NULL;
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	value;

	index = find_min(*stack_a);
	value = get_value(*stack_a, index);
	while (value != (*stack_a)->data)
	{
		if (index <= 2)
		{
			ft_rotate(stack_a, 'a');
		}
		else
			ft_rrotate(stack_a, 'a');
	}
	ft_push(stack_b, stack_a, 'b');
	if (ft_lstsize(*stack_a) > 3)
		sort_five(stack_a, stack_b);
	else
	{
		sort_three(stack_a);
		ft_push(stack_a, stack_b, 'a');
		if (ft_lstsize(*stack_b) == 1)
			ft_push(stack_a, stack_b, 'a');	
	}
}
