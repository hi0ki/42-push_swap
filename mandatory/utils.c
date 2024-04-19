/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:56 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:37:59 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_list *stack)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	i = 0;
	if (!stack)
		return (-1);
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
	ft_lstfree(&stack);
	return (j);
}

int	find_min(t_list *stack)
{
	int	i;
	int	j;
	int	tmp;

	j = -1;
	i = 0;
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
	ft_lstfree(&stack);
	return (j);
}

void	sort_three(t_list **stack_a)
{
	int	i;

	i = find_max(*stack_a);
	if (i == 0)
		ft_rotate(stack_a, 'a');
	else if (i == 1)
		ft_rrotate(stack_a, 'a');
	if ((*stack_a)->data > (*stack_a)->next->data)
		ft_swap(stack_a, 'a');
}

bool	sorted(t_list *stack)
{
	int	i;

	if (ft_lstsize(stack) == 0)
		return (false);
	while (stack->next)
	{
		i = stack->data;
		stack = stack->next;
		if (i >= stack->data)
		{
			return (false);
		}
	}
	return (true);
}
