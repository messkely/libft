/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:13 by messkely          #+#    #+#             */
/*   Updated: 2023/11/26 21:01:11 by messkely         ###   ########.fr       */
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
#include <string.h>
int main()
{
    char *s = "hello";
    char *p = NULL;
    for (int i = 0; i < 6; i++)
        memset(p,s[i],1);
    printf("%s", p);
}