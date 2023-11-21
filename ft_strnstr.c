/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:07:53 by messkely          #+#    #+#             */
/*   Updated: 2023/11/21 12:30:40 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (0);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	if (needle[0] == '\0')
		return ((char *)haystack);
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
// #include <string.h>
// int main()
// {
// 	const char *haystack = "fhas sjdhs szdf";
// 	const char *needle = "szdf";
// 	size_t len = 0;
// 	printf("%s\n", ft_strnstr(haystack, needle, 4));
// 	printf("%s\n", strnstr(haystack, needle, 4));
// }
