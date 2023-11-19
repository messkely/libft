/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttiter_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:55:03 by messkely          #+#    #+#             */
/*   Updated: 2023/11/17 23:06:52 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lsttiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (*lst != NULL)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}