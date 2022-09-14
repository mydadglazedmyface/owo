/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:34:03 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/14 18:29:53 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (i < n)
	{
		a = ((unsigned char *)s1)[i];
		b = ((unsigned char *)s2)[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
