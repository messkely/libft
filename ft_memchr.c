/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:35:30 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 15:16:14 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*new_s;
	size_t				i;

	new_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new_s[i] == (unsigned char)c)
			return ((void *)&new_s[i]);
		i++;
	}
	return (0);
}
// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memchr("djdklj",0,2));
// }

// segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memchr(NULL,'j',2));
// }

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memchr("sss",'s',20));
// }
