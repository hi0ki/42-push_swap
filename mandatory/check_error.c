/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:23:36 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/21 20:37:13 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_char(char *av)
{
	int	i;

	if (!av)
		exit(EXIT_FAILURE);
	i = 0;
	while (av[i])
	{
		if (av[i] < '0' || av[i] > '9')
			puterror("Error\n");
		i++;
	}
}

void	check_num(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp_stack;

	tmp_stack = *stack;
	while (tmp_stack)
	{
		tmp = tmp_stack->next;
		while (tmp)
		{
			if (tmp_stack->data == tmp->data)
				puterror("Error\n");
			tmp = tmp->next;
		}
		tmp_stack = tmp_stack->next;
	}
}
