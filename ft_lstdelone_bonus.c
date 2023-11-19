/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:05:45 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 23:49:45 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	tmp = (*lst)->next;
	del((*lst)->content);
	free(*lst);
	*lst = tmp;
}
// int main()
// {
//     t_list *head;
//     t_list *h1;
//     t_list *h2;
//
//     head = ft_lstnew(ft_strdup("Welcome "));
//     h1 = ft_lstnew(ft_strdup("hello"));
//     h2 = ft_lstnew(ft_strdup("Morocco"));
//  
//     head->next = h1;
//     h1->next = h2;
//     h2->next = NULL;
//
//
//     ft_lstdelone(&head, del);
//     printf("%s\n", head->content);
//
//     return 0;
// }
