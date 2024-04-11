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

void set_index(t_list **stack_a, t_list *list)
{
	int i = 0;
	t_list *skip;

	skip = *stack_a;
	while (skip)
	{
		if (skip->data == list->data)
		{
			skip->index = i;
			skip = skip;
		}
	}
}