/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:13 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 14:03:36 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

// no segmentation fault
// int main()
// {
// 	printf("%s\n", ft_memset("yNULL","NULL",20));
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