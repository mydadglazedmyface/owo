/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:14:10 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/08 19:31:05 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
		if (src[j] == '\0')
		{
			dst[i + j] = '\0';
			break ;
		}
	}
	return (ft_strlen(dst) + ft_strlen(src) - j);
}
