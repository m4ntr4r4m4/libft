/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:41:37 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/08 16:21:13 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	word_c(char *str, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	if (str[i] != c && str[i] != '\0')
		wc++;
	while (str[i])
	{
		if (str[i + 1] && str[i] == c)
			if (str[i + 1] != c)
				wc++;
		i++;
	}
	return (wc);
}

void	dump(int j, int wc, char **mots, char *str)
{
	int	i;

	i = 0;
	while (j < wc)
	{
		while (str[i] == '\0')
			i++;
		if (str[i] != '\0')
			mots[j] = &str[i];
		while (str[i] != '\0')
			i++;
		j++;
	}
	mots[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**mots;
	int		i;
	int		j;
	int		wc;
	char	*str;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	str = ft_memcpy(str, s, ft_strlen((char *)s) + 1);
	wc = word_c((char *)s, c);
	mots = malloc(sizeof(char *) * (wc + 1));
	if (s[i] == '\0')
		mots[0] = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	dump(j, wc, mots, str);
	return (mots);
}
