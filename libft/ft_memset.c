/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:37:03 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/01 21:37:51 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}
