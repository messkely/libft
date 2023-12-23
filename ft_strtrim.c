/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:55:37 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 14:49:09 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src, int pos, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[pos + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*ptr;

	start = 0;
	end = 0;
	if (s1 == 0)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != 0)
		end--;
	len = end - start + 1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	ptr = ft_strcpy(ptr, s1, start, len);
	return (ptr);
}

int main()
{
	printf("%s ",ft_strtrim("rrr", NULL));
}

