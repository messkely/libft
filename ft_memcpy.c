/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:41:36 by messkely          #+#    #+#             */
/*   Updated: 2023/11/27 14:45:07 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	 
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
// #include <libc.h>
// int main()
// {

	
// 	int dst[4];
// 	const int src[] = {1,2,3,4};
// 	char  *f =  NULL;
// 	char *f1 =  "kk";
// 	printf("%s\n",ft_memcpy(f,f1, 1));
// 	//printf("%s\n",memcpy(f,f1, 1));
// 	//int *r = ft_memcpy(dst,src,4);
// 	//printf("%d\n",r[0]);
// 	//printf("%d\n",r[1]);
// 	//printf("%d\n",r[2]); 
// }


