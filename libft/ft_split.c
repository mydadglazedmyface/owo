/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:35:53 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/13 15:46:42 by npongdon         ###   ########.fr       */
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

static char	**ft_spabort(char **arr, size_t i)
{
	size_t	j;

	j = 0;
	while (j <= i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (0);
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
		if (arr[i] == 0)
			return (ft_spabort(arr, i));
		s += j + 1;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
