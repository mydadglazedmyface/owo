/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:44:58 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/04 16:49:50 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int		i;
	unsigned char		*dstt;
	const unsigned char	*srcc;

	dstt = dst;
	srcc = src;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			dstt[i] = srcc[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len-- > 0)
			dstt[len] = srcc[len];
	}
	return (dst);
}
