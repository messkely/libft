/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:09:57 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 13:04:03 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// segmentation fault
// int main()
// {
// 	printf("%d\n", ft_memcmp("sss",'s',20));
// }

// segmentation fault
// int main()
// {
// 	printf("%d\n", ft_memcmp(NULL,"djdf",20));
// }

// no segmentation fault
// int main()
// {
// 	printf("%d\n", ft_memcmp(NULL,NULL,0));
// }
// segmentation fault
// int main()
// {
// 	printf("%d\n", ft_memcmp(NULL,NULL,20));
// }
