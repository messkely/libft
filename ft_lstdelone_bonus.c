/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:05:45 by messkely          #+#    #+#             */
/*   Updated: 2023/11/20 12:42:14 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst || !del)
		return ;
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
