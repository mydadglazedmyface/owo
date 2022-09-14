/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:14:10 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/14 21:36:09 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	if (size <= d)
		return (size + ft_strlen(src));
	i = 0;
	while (i < size - d - 1 && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + ft_strlen(src));
}
