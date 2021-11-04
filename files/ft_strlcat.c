/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:29:43 by ahammoud          #+#    #+#             */
/*   Updated: 2021/10/07 15:48:34 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	x;

	x = 0;
	while (src[x])
		x++;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	z;
	unsigned int	y;

	i = 0;
	x = ft_strlen(dest);
	y = ft_strlen(src);
	z = x;
	if (size < (x + 1))
	{
		dest[x] = '\0';
		return (y + size);
	}
	else
	{	
		while (src[i] && i < (size - z - 1))
		{
			dest[x] = src[i];
			x++;
			i++;
		}
		dest[x] = '\0';
		return (z + y);
	}
}
