/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:09:30 by messkely          #+#    #+#             */
/*   Updated: 2023/11/11 12:34:42 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	ptr1;
	unsigned char	ptr2;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		ptr1 = (unsigned char)s1[i];
		ptr2 = (unsigned char)s2[i];
		if (ptr1 != ptr2)
			return ((int)(ptr1 - ptr2));
		i++;
	}
	return (0);
}
