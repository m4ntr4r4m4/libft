/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:53:04 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/04 13:06:50 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t					i;
	char	*restrict		dest1;
	const char	*restrict	src1;

	dest1 = dst;
	src1 = src;
	i = 0;
	while (src1[i] != '\0' && (i < n))
	{
		dest1[i] = src1[i];
		i++;
	}
	while (i < n)
	{
		dest1[i] = '\0';
		i++;
	}
	return (dest1);
}
