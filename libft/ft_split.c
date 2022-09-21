/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:54:05 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/21 17:50:38 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_spcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		if (j == 1 && *s == c)
			i++;
		if (*s == c)
			j = 0;
		else
			j = 1;
		s++;
	}
	if (j == 1)
		i++;
	return (i);
}

static char	**ft_spabort(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

static char	**onemorelinepls(char const *s, char c, char **arr, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (s[j] != '\0' && s[j] != c)
			j++;
		if (j > 0)
		{
			arr[i] = ft_substr(s, 0, j);
			if (!(arr[i]))
				return (ft_spabort(arr));
			i++;
		}
		s += j + 1;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;

	size = ft_spcount(s, c);
	arr = malloc((size + 1) * sizeof(char *));
	if (!arr)
		return (0);
	return (onemorelinepls(s, c, arr, size));
}
/*\\===============================================\\  */
/* \\ I JUST NEED ONE MORE LINE PLEASE NORM-SAMA... \\ */
/*  \\===============================================\\*/
