/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:03:06 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/14 22:42:52 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, char c)
{
	int	i;
	int	ret;

	i = 0;
	ret = -1;
	while (s)
	{
		if (s[i] == c)
			ret = i;
		if (s[i] == '\0')
			break ;
		i++;
	}
	if (ret == -1)
		return (0);
	return ((char *)s + ret);
}
