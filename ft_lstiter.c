#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    while (lst != '\0')
    {
        f(lst);
        lst = (*lst).next;
    }
}
