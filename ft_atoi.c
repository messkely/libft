/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:58:29 by messkely          #+#    #+#             */
/*   Updated: 2023/11/21 12:05:32 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;
	long	tmp;

	tmp = 0;
	i = 0;
	res = 0;
	sign = 1;
	while ( ft_isspace(str[i]) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) && str[i])
	{
		res = res * 10 + (str[i] - 48);
		if (tmp > res && sign == -1)
			return (0);
		else if (tmp > res && sign == 1)
			return (-1);
		tmp = res;
		i++;
	}
	return (sign * res);
}
