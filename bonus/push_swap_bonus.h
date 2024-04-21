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

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../printf/ft_printf.h"
# include "gnl/get_next_line.h"
/*        struct           */
typedef struct s_list{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

/*              sort                */
bool	sorted(t_list *stack);
/*               moves                  */
void	ft_rotate(t_list **head);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rrotate(t_list **head);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_swap(t_list **head);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_push(t_list **head, t_list **stack_b);
/*                linked list                     */
void	ft_lstadd_back(t_list **head, t_list *node);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *head);
t_list	*ft_lstnew(int data);
void	ft_lstfree(t_list **head);
/*                check errors            */
void	check_num(t_list **stack);
void	check_char(char *av);
void	puterror(char *str);
/*               utils              */
int		ft_atoi(char *str);
int		_strlen(const char *str);
char	**ft_split(char const *s, char c);
char	**ft_free(char **str, int i);

#endif
