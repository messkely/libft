/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:35:30 by messkely          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:19 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
// int main()
// {
// 	int a[] = {1,2,3,4,5,6,7};
// 	int *r = ft_memchr(a, 2, 7);
// 	printf("%d\n", r[0]);
// 	printf("%d\n", r[1]);
// 	printf("%d\n", r[2]);
// 	printf("%d\n", r[3]);
// 	printf("%d\n", r[4]);
// 	printf("%d\n", r[5]);

// }
