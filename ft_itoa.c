/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:58:46 by messkely          #+#    #+#             */
/*   Updated: 2023/12/22 11:53:22 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_convertnbr(char *ptr, long nb, int len)
{
	char	*digits;
	int		tmp;

	tmp = len;
	digits = "0123456789";
	while (nb)
	{
		ptr[--len] = digits[nb % 10];
		nb /= 10;
	}
	ptr[tmp] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*ptr;

	nb = n;
	len = ft_size(nb);
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
	return (ft_convertnbr(ptr, nb, len));
}
// segmentation fault
int main()
{
	printf("%s",ft_itoa(123));
}
