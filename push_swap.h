#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list{
    int  data;
    struct s_list *next;
}t_list;

void  ft_swap(t_list **head);
int ft_lstsize(t_list *head);
void ft_lstadd_back(t_list *head, t_list *node);
t_list *ft_lstnew(int data);
int ft_atoi(char *str);


#endif