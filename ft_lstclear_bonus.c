/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:07:48 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 23:36:28 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}
/*
int main()
{
    t_list *head;
    t_list *h1;
    t_list *h2;

    head = ft_lstnew(ft_strdup("Welcome "));
    h1 = ft_lstnew(ft_strdup("hello"));
    h2 = ft_lstnew(ft_strdup("Morocco"));
    //Linking
    head->next = h1;
    h1->next = h2;
    h2->next = NULL;
    
    ft_lstclear(&head, del);
    printf("%s\n",head);
    return 0;
}*/
