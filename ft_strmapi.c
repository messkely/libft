/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:18:19 by messkely          #+#    #+#             */
/*   Updated: 2023/11/15 21:08:51 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	if (!s || !f)
		return (0);
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return ((char *)0);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// char add_index(unsigned int index, char c)
// {
//     return c + index;
// }
//
// int main()
// {
//     const char *input = "Hello";
//  
//     char *result = ft_strmapi(input, add_index);
//
//     if (result)
//     {
//         printf("Original: %s\n", input);
//         printf("Modified: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Error: Memory allocation failed.\n");
//     }
//
//     return 0;
// }
