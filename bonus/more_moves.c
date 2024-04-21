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

#include "push_swap.h"

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
	if (ft_lstsize(*stack_a) <= 1 || ft_lstsize(*stack_b) <= 1)
		return ;
	ft_rotate(stack_a, ' ');
	ft_rotate(stack_b, ' ');
	ft_printf("rr\n");
}

void	ft_rrotate(t_list **head, char c)
{
	t_list	*last;
	t_list	*blast;

	if (ft_lstsize(*head) <= 1)
		return ;
	printf("%d\n", ft_lstsize(*head));
	blast = ft_blast(*head);
	last = ft_last(*head);
	if (!blast || !last)
		return ;
	blast->next = NULL;
	last->next = *head;
	*head = last;
	if (c == 'a')
		ft_printf("rra\n");
	else if (c == 'b')
		ft_printf("rrb\n");
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 1 || ft_lstsize(*stack_b) <= 1)
		return ;
	ft_rrotate(stack_a, ' ');
	ft_rrotate(stack_b, ' ');
	ft_printf("rrr\n");
}
