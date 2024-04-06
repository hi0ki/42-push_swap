#include "push_swap.h"

void ft_push(t_list **stack1, t_list **stack2, char c)
{
	t_list *tmp;

	if (!stack1 || !stack2 )
		return ;
	tmp = *stack2;
	*stack2 = (*stack2)->next;

	tmp->next = *stack1;
	*stack1 = tmp;
	if (c == 'a')
		ft_printf("pa\n");
	if (c == 'b')
		ft_printf("pb\n");
}
void  ft_swap(t_list **head, char c)
{
    t_list *tmp;

    if (!head || ft_lstsize(*head) < 2)
        return ;

    tmp = (*head);
    (*head)= (*head)->next;
    tmp->next = (*head)->next;
    (*head)->next = tmp;
	if (c == 'a')
		ft_printf("sa\n");
	else if (c == 'b')
		ft_printf("sb\n");
}

void ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a, ' ');
	ft_swap(stack_b, ' ');
	ft_printf("ss\n");
}

void ft_rotate(t_list **head, char c)
{
	t_list *lst;

	lst = *head;
	*head = (*head)->next;
	ft_lstadd_back(head, ft_lstnew(lst->data));
	free(lst);
	if (c == 'a')
		ft_printf("ra\n");
	else if (c == 'b')
		ft_printf("rb\n");
}