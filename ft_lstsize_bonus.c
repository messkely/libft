/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:46:51 by messkely          #+#    #+#             */
/*   Updated: 2023/11/16 13:17:23 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    
    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

int main()
{
    t_list *h1 = ft_lstnew("!");
    
    ft_lstadd_front(&h1,ft_lstnew("World"));
    ft_lstadd_front(&h1, ft_lstnew("Hello "));
    
    printf("%d\n",ft_lstsize(h1));
  
    return 0;
}