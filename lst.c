#include "push_swap.h"

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    if (!str)
        return 0;
    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}
t_list *ft_lstnew(int data)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return (node);
}

void ft_lstadd_back(t_list *head, t_list *node)
{
    if (!node || !head)
        return ;
    while (head->next)
    {
        head = head->next;
    }
    head->next = node;
}
int ft_lstsize(t_list *head)
{
    int i = 0;
    while (head)
    {
        head = head->next;
        i++;
    }
    return (i);
}
