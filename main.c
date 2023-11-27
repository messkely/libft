#include "libft.h"

int createfile(char *s, char *filename)
{
    int fd;
    fd = open(filename, O_APPEND | O_WRONLY | O_CREAT | O_RDONLY, 777);
    ft_putendl_fd(s,fd);
    if (fd == -1)
        return 0;
    else
        return 1;
}
int main()
{
    t_list *head = ft_lstnew("hamza");
    t_list *current;
    char i = '0';
    while (i < '5')
    {
        ft_lstadd_back(&head,ft_lstnew(ft_strjoin("hamza",&i)));
        i++;
    }
    while (head->next != NULL)
    {
        if (createfile(head->content, "ttg.txt"))
            printf("succecfull creating file\n");
        else
            printf("error creating file\n");
        head = head->next;
    }

}