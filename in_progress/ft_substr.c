/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:48:39 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/06 21:23:15 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		ss;

	ss = ft_strlen((char *)s);
	if (start >= (unsigned int)ss || *s == '\0')
		return ("\0");
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}
