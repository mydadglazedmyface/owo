/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:49:54 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/12 19:04:54 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_spcount(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i += 1;
	else
		n *= -1;
	while (n < 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	s = ft_calloc(ft_spcount(n) + 1, 1);
	if (!s)
		return (0);
	i = ft_spcount(n) - 1;
	if (n < 0)
		s[0] = '-';
	else if (n > 0)
		n *= -1;
	else
		s[0] = '0';
	while (n < 0)
	{
		s[i] = n % 10 * -1 + '0';
		n /= 10;
		i--;
	}
	return (s);
}
