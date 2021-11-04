/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:24 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/04 11:43:28 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strrchr(const char	*s, int	c)
{
	int			i;
	char	*r;

	r = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			r = (char *)&s[i];
		i++;
	}
	return (r);
}
