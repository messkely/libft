/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:30:54 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 23:24:52 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main()
{
    t_list *head = ft_lstnew("initial");
    
    ft_lstadd_back(&head, ft_lstnew("last b"));
    t_list *current = head;
    while (current->next != NULL)
    {
        printf("%s\n", current->content);
        current = current->next;
    }
    printf("%s\n", current->content);
    return 0;
}*/
