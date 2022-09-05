/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:35:11 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/04 23:59:51 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = (char *)malloc(i + 1);
	if (p != 0)
	{
		i = 0;
		while (s[i] != '\0')
		{
			p[i] = s[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
