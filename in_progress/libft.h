/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:34:19 by ahammoud          #+#    #+#             */
/*   Updated: 2021/11/05 21:12:49 by ahammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(char *src);
int				ft_toupper(int	c);
int				ft_tolower(int	c);
char			*ft_strrchr(const char	*s, int	c);
char			*ft_strnstr(const char *haystack, \
		const char *needle, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char	*s, int	c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memcpy(void *restrict dst, \
		const void *restrict src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_isprint(int	c);
int				ft_isdigit(int	c);
int				ft_isascii(int	c);
int				ft_isalpha(int	c);
void			ft_bzero(void *s, size_t n);
long			ft_atoi(const char *str);
int				ft_isalnum(int	c);
int				ft_strlen(char *str);
#endif
