/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:58:46 by messkely          #+#    #+#             */
/*   Updated: 2023/11/15 20:48:46 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*digits;
	char	*ptr;

	nb = n;
	len = ft_size(nb);
	digits = "0123456789";
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	if (nb == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	ptr[len] = '\0';
	while (nb)
	{
		ptr[--len] = digits[nb % 10];
		nb /= 10;
	}
	return (ptr);
}
