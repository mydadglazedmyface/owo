/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:11:28 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/05 18:16:54 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(len + 1);
	i = 0;
	if (str != 0)
	{
		while (len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
		str[i] = '\0';
	}
	return (str);
}
