/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:48:39 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/11 14:19:16 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	T;
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	T = (unsigned int)ft_strlen((char *)s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < T && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
