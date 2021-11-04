/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:08:18 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/04 13:18:34 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str;
	char		*dest;

	str = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (str[i] != '\0' && (i < len))
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
