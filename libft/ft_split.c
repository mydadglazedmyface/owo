/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:35:53 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/12 17:47:01 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_spcount(char const *s, char c)
{
	size_t	i;

	i = 1;
	while (*s != '\0')
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_spcount(s, c);
	arr = malloc((size + 1) * sizeof(char *));
	if (!arr || !c)
		return (0);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (s[j] != '\0' && s[j] != c)
			j++;
		arr[i] = ft_substr(s, 0, j);
		s += j + 1;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
