/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:20:33 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 22:31:26 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newNode;
    
    newNode = (t_list *)malloc(sizeof(t_list));
    if (newNode != NULL)
    {
        newNode->content = content;
        newNode->next = NULL;
        return (newNode);
    }
    return (NULL);
}

// void printList(t_list *head)
// {
//     while (head != NULL)
//     {
//         printf("%s",head->content);
//         head = head->next;
//     }
// }

// int main()
// {
//     t_list *node1 = ft_lstnew("Hello ");
//     t_list *node2 = ft_lstnew("World");
//     t_list *node3 = ft_lstnew("!");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("Linked List: ");
//     printList(node1);

//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }