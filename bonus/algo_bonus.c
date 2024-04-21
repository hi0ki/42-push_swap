/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:38:42 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:38:44 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

bool	cmp(char *str, char *src)
{
	int	i;

	i = 0;
	if (str[i] == '\0' || src[i] == '\0')
		return (false);
	if (_strlen(str) != _strlen(src) + 1)
		return (false);
	while (str[i] && src[i])
	{
		if (str[i] != src[i])
			return (false);
		i++;
	}
	return (true);
}

void	more_check(char *str, t_list **stack_a, t_list **stack_b)
{
	if (cmp(str, "sa") == true)
		ft_swap(stack_a);
	else if (cmp(str, "sb") == true)
		ft_swap(stack_b);
	else if (cmp(str, "ss") == true)
		ft_ss(stack_a, stack_b);
	else if (cmp(str, "pa") == true)
		ft_push(stack_a, stack_b);
	else if (cmp(str, "pb") == true)
		ft_push(stack_b, stack_a);
	else if (cmp(str, "ra") == true)
		ft_rotate(stack_a);
	else if (cmp(str, "rb") == true)
		ft_rotate(stack_b);
	else if (cmp(str, "rr") == true)
		ft_rr(stack_a, stack_b);
	else if (cmp(str, "rra") == true)
		ft_rrotate(stack_a);
	else if (cmp(str, "rrb") == true)
		ft_rrotate(stack_b);
	else if (cmp(str, "rrr") == true)
		ft_rrr(stack_a, stack_b);
	else
		puterror("Error\n");
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	*stack_b = NULL;
	str = get_next_line(0);
	while (str)
	{
		more_check(str, stack_a, stack_b);
		str = get_next_line(0);
	}
	if (sorted(*stack_a) == true && ft_lstsize(*stack_b) == 0)
		ft_printf("OK\n");
	else
		puterror("KO\n");
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 1;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(str[j])));
			j++;
		}
		ft_free(str, j);
		i++;
	}
	check_num(&stack_a);
	checker(&stack_a, &stack_b);
	ft_lstfree(&stack_a);
}
