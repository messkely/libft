/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:48:30 by messkely          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:13 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	//if (!dst && !dstsize)
	//	return (len_src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	j = 0;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
int main()
{
	char dst;
	const char src[] = "dfs";
	// printf("%zu\n",ft_strlcat(NULL,src,0));
	printf("%d",dst);
	
}
// 0x107cd7025%
// 0x11ed2b025