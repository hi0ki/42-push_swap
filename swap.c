#include "push_swap.h"


void  ft_swap(t_list **head)
{
    t_list *tmp;

    if (!head || ft_lstsize(*head) < 2)
        return ;

    tmp = (*head);
    (*head)= (*head)->next;
    tmp->next = (*head)->next;
    (*head)->next = tmp;
}
