#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	t_list *stack_a = NULL;
	char **str;

	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		int j = 0;
		while (str[j])
		{
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(str[j])));
			j++;
		}
		i++;
	}
	t_list *skip = sort(stack_a);
	while (skip)
	{
		ft_printf("%d\n", skip->data);
		skip = skip->next;
	}
	return (0); 
}
