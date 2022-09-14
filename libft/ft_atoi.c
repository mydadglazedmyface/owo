/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:58:50 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/15 02:12:57 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	ret;
	int	neg;

	ret = 0;
	neg = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		ret *= 10;
		ret += *nptr - '0';
		nptr++;
	}
	return (ret * neg);
}
