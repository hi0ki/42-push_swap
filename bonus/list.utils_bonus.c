/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:38:24 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:38:26 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*ft_lstnew(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **head, t_list *node)
{
	t_list	*last;

	if (!node)
		return ;
	if (!*head)
	{
		*head = node;
		return ;
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = node;
}

int	ft_lstsize(t_list *head)
{
	int		i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_lstfree(t_list **head)
{
	t_list	*tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
