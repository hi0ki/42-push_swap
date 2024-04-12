#include "push_swap.h"

void algo(t_list *stack_a)
{
	int size;
	int start;
	int end;

	size = 
}
int main(int ac, char **av)
{
	int i;
	t_list *stack_a = NULL;
	char **str;
	int j;

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
