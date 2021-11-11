/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:33:15 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/10 10:51:29 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	S;
	size_t	E;
	char	*str1;

	if (!s1)
		return (NULL);
	S = 0;
	while (s1[S] && ft_strchr(set, s1[S]))
		S++;
	E = ft_strlen((char *)s1 + S);
	if (E)
		while (ft_strchr(set, s1[S + E - 1]) != 0)
			E--;
	str1 = malloc(sizeof(char) * E + 1);
	if (!str1)
		return (NULL);
	(void)ft_strlcpy(str1, (char *)&s1[S], E + 1);
	return (str1);
}
