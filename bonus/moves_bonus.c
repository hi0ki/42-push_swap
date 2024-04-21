/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:35 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:37:39 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_push(t_list **stack1, t_list **stack2)
{
	t_list	*tmp;

	if (!*stack2)
		return ;
	tmp = *stack2;
	*stack2 = (*stack2)->next;
	tmp->next = *stack1;
	*stack1 = tmp;
}

void	ft_swap(t_list **head)
{
	t_list	*tmp;

	if (!head || ft_lstsize(*head) < 2)
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = (*head)->next;
	(*head)->next = tmp;
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 1 || ft_lstsize(*stack_b) <= 1)
		return ;
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_rotate(t_list **head)
{
	t_list	*lst;

	if (!head || ft_lstsize(*head) < 2)
		return ;
	lst = *head;
	*head = (*head)->next;
	lst->next = NULL;
	ft_lstadd_back(head, lst);
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
