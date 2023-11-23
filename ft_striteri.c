/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:02:59 by messkely          #+#    #+#             */
/*   Updated: 2023/11/23 20:03:28 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>


// void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	int	i;

// 	if (!s || !f)
// 		return ;
// 	i = 0;
// 	while (s[i])
// 	{
// 		(*f)(i, &s[i]);
// 		i++;
// 	}
// }



#include <stdio.h>

void f_toupper(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

void to_upper(unsigned int i, char *c) {
    f_toupper(c);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    int i;

    if (!s || !f) {
        return;
    }

    i = 0;
    while (s[i]) {
        (*f)(i, &s[i]);
        i++;
    }
}

int main() {
    char str[] = "hello, world!";

    ft_striteri(str, to_upper);

    printf("%s\n", str);

    return 0;
}



