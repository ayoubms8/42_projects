#include <stdlib.h>
typedef struct s_list
{
    void *content;
    struct s_list *next;
    
}t_list;

t_list *ft_listnew(void *content)
{
    t_list new_list;
    new_list = malloc(sizeof(t_list));
    new_list.content = content;
    new_list.next = NULL;
    return (new_list);
}