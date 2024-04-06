#include "push_swap.h"

void ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a, ' ');
	ft_rotate(stack_b, ' ');
	ft_printf("rr\n");
}

void ft_rrotate(t_list **head, char c)
{
    t_list *last;
	t_list *blast;

	blast = ft_blast(*head);
	last = ft_last(*head);
	blast->next = NULL;
	last->next = *head;
	*head = last;
		if (c == 'a')
		ft_printf("rra\n");
	else if (c == 'b')
		ft_printf("rrb\n");
}

void ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rrotate(stack_a, ' ');
	ft_rrotate(stack_b, ' ');
	ft_printf("rrr\n");
}
