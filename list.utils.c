#include "push_swap.h"

t_list *ft_lstnew(int data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void ft_lstadd_back(t_list **head, t_list *node)
{
	t_list *last;
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
int ft_lstsize(t_list *head)
{
	if (!head)
		return (0);
	int i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
void ft_lstfree(t_list **head)
{
	t_list *tmp;
	while (*head)
	{
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}