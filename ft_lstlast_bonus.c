/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:18:00 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 23:53:10 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = NULL;
	if (lst->next == NULL)
		return (lst);
	while (lst != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}
// int main()
// {
//     t_list *head = ft_lstnew("welcome ");
//     t_list *h1 = ft_lstnew("to ");
//     t_list *h2 = ft_lstnew("your ");
//     t_list *h3 = ft_lstnew("dream...");
//     //Linking
//     head->next = h1;
//     h1->next = h2;
//     h2->next = h3;
//     h3->next = NULL;
//
//     t_list *last = ft_lstlast(head);
//     printf("%p\n", last);
//     printf("first: %p\n", h1);
//     printf("last: %p\n", h3);
//     return 0;
// }
