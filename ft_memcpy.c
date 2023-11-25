/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:41:36 by messkely          #+#    #+#             */
/*   Updated: 2023/11/25 12:44:14 by messkely         ###   ########.fr       */
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
#include <stdio.h>
int main() {
    int dst[20];
    const int src[] = {1337,46,997};
    size_t n = 12; // number of bytes
    int *r = ft_memcpy(dst, src, n);
    for (size_t i = 0; i < 3; ++i) {
        printf("%d ", dst[i]);
    }
    printf("\n");
    return 0;
}


