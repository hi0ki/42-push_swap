#include "push_swap.h"

void sort(t_list **stack_a, t_list **stack_b, int start, int end)
{
	while (*stack_a)
	{
		if ((*stack_a)->index >= start && (*stack_a)->index <= end)
		{
			ft_push(stack_b, stack_a, 'b');
			start++;
			end++;
		}
		else if((*stack_a)->index < start)
		{
			ft_push(stack_b, stack_a, 'b');
			ft_rotate(stack_b, 'b');
			start++;
			end++;
		}
		else
			ft_rotate(stack_a, 'a');
	}
}
void algo(t_list *stack_a)
{
	t_list *stack_b = NULL;
	int len = ft_lstsize(stack_a);


	if (len <= 5)
		sort_five(&stack_a , &stack_b);
	else if (len <= 100)
		sort(&stack_a , &stack_b, 0 , 15);

	while (stack_b)
	{
		printf("%d\n", stack_b->data);
		stack_b = stack_b->next;
	}
}
int main(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	t_list	*stack_a = NULL;

	i = 1;
	if (ac > 1)
	{
	while (i < ac)
	{
			str = ft_split(av[i], ' ');
			j = 0;
			while (str[j])
			{
				ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(str[j])));
				j++;
			}
			i++;
		}
	
	set_index(&stack_a);
	algo(stack_a);
	}

	return (0); 
}
