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

#include "push_swap.h"

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

	if (!node || !head)
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
	int	i;

	i = 0;
	if (!head)
		return (-1);
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	ft_lstfree(t_list **head)
{
	t_list	*tmp;
	t_list	*save;

	save = *head;
	while (*head && tmp)
	{
		tmp = save;
		save->data = 0;
		free(save);
		save = save->next;
	}
	*head = NULL;
}
