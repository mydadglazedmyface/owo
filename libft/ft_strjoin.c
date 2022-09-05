/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:17:21 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/05 20:08:25 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 != 0)
	{
		ft_strlcpy(s3, s1, ft_strlen(s1));
		ft_strlcpy(s3 + ft_strlen(s1), s2, ft_strlen(s2));
		s3[ft_strlen(s3)] = '\0';
	}
	return (s3);
}

#include <stdio.h>

int	main(void)
{
	char	*a = "123dwsdw";
	char	*b = "vrvrvrvroooom";
	char	*c = ft_strjoin(a, b);
	puts(c);
	free(s);
	return (0);
}
