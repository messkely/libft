#include "libft.h"
#include <string.h>
#include <stdio.h>

void *print_list(void *data)
{
    printf("%s ", data);
    return ("dd");
}

int main()
{
    // t_list *head = ft_lstnew(strdup("hello"));

    // ft_lstadd_back(&head, ft_lstnew(ft_strdup("friend1")));
    // ft_lstadd_back(&head, ft_lstnew(ft_strdup("friend2")));
    // ft_lstadd_back(&head, ft_lstnew(ft_strdup("friend3")));
    // ft_lstadd_front(&head, ft_lstnew(ft_strdup("first")));

    // // ft_lstiter(head, print_list);
    // printf("\nsize of list is : %d\n", ft_lstsize(head));
    // ft_lstmap(head, print_list, free);
    // ft_lstclear(&head, free);
    // printf("\nsize of list is : %d", ft_lstsize(head));
    char *a = ft_strdup("hello");
    free(a);
    printf("%s\n %p\n",a,a);
}

// void upp(unsigned int i, char *data) {
//     if (data == NULL) {
//         return;
//     }
//     *data -= 32;
// }
// int main()
// {
//     char f[] = "aaaa";
//     ft_striteri(f, upp);
//     printf("%s ", f);
// }

// char upp(unsigned int i, char data) {
//     if (data == 0) {
//         return (0);
//     }
//     return(data -= 32);
// }
// int main()
// {
//     char f[] = "aaaa";
//     char *res = ft_strmapi(f, upp);
//     printf("%s ", res);
// }