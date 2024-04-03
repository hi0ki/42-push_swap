#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "printf/ft_printf.h"

typedef struct s_list{
	int  data;
	struct s_list *next;
}t_list;

void	ft_rotate(t_list **head, char c);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rrotate(t_list **head, char c);
void 	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_swap(t_list **head, char c);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void    ft_push(t_list **head, t_list *node, char c);
void    ft_lstadd_back(t_list **head, t_list *node);
int     ft_lstsize(t_list *head);
t_list  *ft_lstnew(int data);
int     ft_atoi(char *str);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
t_list *ft_blast(t_list *head);
t_list *ft_last(t_list *head);
void ft_lstfree(t_list **head);


#endif