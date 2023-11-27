/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:22:33 by messkely          #+#    #+#             */
/*   Updated: 2023/11/27 17:34:26 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	//if (*s == (char)c)
	//	return ((char *)s);
	return (NULL);
}
/*int main()
{
	char s[] = "heloohfj";
	char c = 'o';
	printf("%s\n",ft_strchr(s,c));
}*/