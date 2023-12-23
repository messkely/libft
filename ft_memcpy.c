/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:41:36 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 13:24:41 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memcpy("yNULL","NULL",20));
// }

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memcpy(NULL,NULL,20));
// }

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memcpy(NULL,"asd",0));
// }

// bus error
// int main()
// {
// 	printf("%s\n", ft_memcpy(NULL,"sdjd",10));
// }

// segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memcpy("asd",NULL,3));
// }
