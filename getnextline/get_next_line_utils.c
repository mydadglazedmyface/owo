/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:09:16 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/16 06:13:16 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, char c)
{
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			break ;
		s++;
	}
	return (0);
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
