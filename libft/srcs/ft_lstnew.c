#include "header.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_list;
    new_list = malloc(sizeof(t_list));
    new_list->content = content;
    new_list->next = NULL;
    return (new_list);
}