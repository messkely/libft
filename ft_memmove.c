/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:13:51 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 13:29:56 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dst = (unsigned char *)dst;
		new_src = (unsigned char *)src;
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (unsigned char *)dst + (len - 1);
		new_src = (unsigned char *)src + (len - 1);
		while (len--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memmove("yNULL","NULL",20));
// }

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memmove(NULL,NULL,20));
// }

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memmove(NULL,"asd",0));
// }

// bus error
// int main()
// {
// 	printf("%s\n", ft_memmove("jfod","sdjd",10));
// }

// segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memmove("asd",NULL,3));
// }

