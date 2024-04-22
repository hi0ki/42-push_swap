/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:26 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:37:28 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static t_list	*ft_last(t_list *head)
{
	if (!head)
		return (NULL);
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}

static t_list	*ft_blast(t_list *head)
{
	if (!head)
		return (NULL);
	while (head->next->next)
	{
		head = head->next;
	}
	return (head);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_rrotate(t_list **head)
{
	t_list	*last;
	t_list	*blast;

	if (ft_lstsize(*head) <= 1)
		return ;
	blast = ft_blast(*head);
	last = ft_last(*head);
	if (!blast || !last)
		return ;
	blast->next = NULL;
	last->next = *head;
	*head = last;
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
}
