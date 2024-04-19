/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:48 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/04/18 14:37:49 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../printf/ft_printf.h"
/*        struct           */
typedef struct s_list{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

/*              sort                */
void	set_index(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
bool	sorted(t_list *stack);
int		find_max(t_list *stack);
int		find_min(t_list *stack);
/*              moves                  */
void	ft_rotate(t_list **head, char c);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rrotate(t_list **head, char c);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_swap(t_list **head, char c);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_push(t_list **head, t_list **stack_b, char c);
/*                linked list                     */
void	ft_lstadd_back(t_list **head, t_list *node);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *head);
t_list	*ft_lstnew(int data);
int		ft_atoi(char *str);
int		ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
void	ft_lstfree(t_list **head);

#endif
