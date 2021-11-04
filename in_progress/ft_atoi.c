/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:40:59 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/04 12:44:00 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_atoi(const char *str)
{
	int	x;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	x = 0;
	while (str[i] <= ' ' )
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = (x * 10) + str[i] - 48;
		i++;
	}
	return (x * sign);
}
