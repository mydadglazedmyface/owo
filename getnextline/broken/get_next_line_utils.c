/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:47:12 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/08 22:57:27 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int		i;
	const unsigned char	*srcc;
	unsigned char		*dstt;

	i = 0;
	dstt = dst;
	srcc = src;
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (ft_strlen(s) <= start)
		start = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s + start, len);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 != 0)
	{
		ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
		ft_strlcpy(s3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
		s3[ft_strlen(s3)] = '\0';
	}
	return (s3);
}
