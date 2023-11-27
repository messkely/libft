/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:13 by messkely          #+#    #+#             */
/*   Updated: 2023/11/27 17:42:03 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_memset(void *b, int c, size_t len)
// {
//     size_t i;
//     unsigned char *ptr;

//     ptr = b;
//     i = 0;
//     while (i < len)
//     {
//         ptr[i] = (unsigned char)c;
//         i++;
//     }
//     return b;  // Return the original pointer
// }


#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    ptr = b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (ptr);
}
// int main()
// {
//     int n = -1;
//     ft_memset(&n,255, 4);
//     ft_memset(&n,255, 3);
//     ft_memset(&n,254, 2);
//     ft_memset(&n,212, 1);
//     printf("%d\n",n);
// }












// #include <string.h>
// int main()
// {
//     char *s = "hello";
//     char *p = NULL;
//     unsigned long d = (unsigned long)s;
//     for (int i = 0; i < 5; i++)
//     {
//         memset((char *)&p + i ,(char)d % 256, 1);
//         d /= 256;
//     }
        
//     printf("%s", p);
// }