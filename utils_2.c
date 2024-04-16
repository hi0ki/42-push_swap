#include "push_swap.h"

int get_value(t_list *stack_a, int index)
{
    int i = 0;

    while (i < index)
    {
        stack_a = stack_a->next;
        i++;
    }
    return (stack_a->data);
}

void sort_five(t_list **stack_a , t_list **stack_b)
{
    int index;
    int value;

    index = find_min(*stack_a);
    value = get_value(*stack_a, index);
    while (value != (*stack_a)->data)
	{
            if (index <= 2)
            {
                ft_rotate(stack_a, 'a');
            }
            else
                ft_rrotate(stack_a, 'a');
	}
    ft_push(stack_b, stack_a, 'b');
    if (ft_lstsize(*stack_a) > 3)
        sort_five(stack_a, stack_b);
    else
    {
        ft_three(stack_a);
        while (ft_lstsize(*stack_b))
            ft_push(stack_a, stack_b, 'a');
    }
}
