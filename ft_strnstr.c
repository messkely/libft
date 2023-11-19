/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:07:53 by messkely          #+#    #+#             */
/*   Updated: 2023/11/15 17:41:00 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack || !needle || !len)
		return (0);
	while (i < len)
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (j == ft_strlen(needle))
			if (len >= (ft_strlen(needle) + i))
				return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
