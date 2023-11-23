/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:13 by messkely          #+#    #+#             */
/*   Updated: 2023/11/23 18:39:41 by messkely         ###   ########.fr       */
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

// int main()
// {
//     int b[20] = {1, 2, 3};
//     int c = 255;
//     size_t n = 12;
//     int *res = ft_memset(b, c, n);

//     for (size_t i = 0; i < 4; ++i) {
//         printf("%d\n", (int)res[i]);  // Cast to int before printing
//     }

//     printf("\n");

//     return 0;
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
        ptr[i] = (char)c;
        i++;
    }
    return (ptr);
}
#include <string.h>
int main()
{
    int b[] = {1, 2, 3};
    ft_memset(b + 2, 1333, 12);

    for (size_t i = 0; i < 3; ++i)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}