#include "libft.h"

void del(void *content)
{
    free(content);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *p;
    if (!lst || !del) {
        return;
    }

    while (*lst) {
        p = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = p;
    }
}

int main() {
    t_list *head;
    t_list *h1;
    t_list *h2;

    head = ft_lstnew(ft_strdup("Welcome "));
    h1 = ft_lstnew(ft_strdup("hello"));
    h2 = ft_lstnew(ft_strdup("Morocco"));

    // Linking
    head->next = h1;
    h1->next = h2;
    h2->next = NULL;

    ft_lstclear(&head, del);
    printf("%s\n", head);
    return 0;
}
