/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:13:51 by messkely          #+#    #+#             */
/*   Updated: 2023/11/15 17:37:09 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check(s[i], c))
		i++;
	return (i);
}

static int	num_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && ft_check(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ft_check(s[i], c))
			i++;
	}
	return (count);
}

static char	*ft_word(const char *str, char c)
{
	int		i;
	int		len_w;
	char	*ptr;

	i = 0;
	len_w = len_word(str, c);
	ptr = (char *)malloc((len_w + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len_w)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	int		j;
	int		len;
	char	**ptr;

	j = 0;
	len = num_words(s, c);
	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (*s)
	{
		while (*s != '\0' && ft_check(*s, c))
			s++;
		if (*s != '\0')
		{
			ptr[j] = ft_word(s, c);
			if (!ptr[j])
			{
				while (j > 0)
					free(ptr[--j]);
				free(ptr);
				return (0);
			}
			j++;
		}
		while (*s && !ft_check(*s, c))
			s++;
	}
	ptr[j] = 0;
	return (ptr);
}
