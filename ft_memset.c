/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:13 by messkely          #+#    #+#             */
/*   Updated: 2023/11/25 11:38:20 by messkely         ###   ########.fr       */
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
        ptr[i] = (char)c;
        i++;
    }
    return (ptr);
}
#include <string.h>
int main()
{
    int b[20] = {1,2,3};
   ft_memset(b, 5, 2);
   ft_memset(b, 57, 1);

    for (size_t i = 0; i < 3; ++i)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}