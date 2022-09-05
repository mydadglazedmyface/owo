/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:07:54 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/04 17:54:29 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
			j++;
		if (little[j] == '\0')
			break ;
		i++;
	}
	return ((char *)big + i);
}
