/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:25:29 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/08 19:54:44 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	memory(int	n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*total;
	int		i;
	long	num;
	int		var;

	num = n;
	var = memory(num);
	i = 0;
	total = malloc(sizeof(char) * (var + 1));
	total[var] = '\0';
	while (var - 1 > i)
	{
		if (num < 0)
		{
			total[i++] = '-';
			num = -num;
		}
		while (num >= 10)
		{
			total[var-- - 1] = ((num % 10) + 48);
			num /= 10;
		}
	}
	total[var-- - 1] = ((num % 10) + 48);
	return (total);
}
