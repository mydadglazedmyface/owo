/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:49:03 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/08 20:27:55 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s = ft_strjoin("syssy", "vveveve");
	puts(s);
	printf("%d %d %d\n", ft_isdigit('9'), ft_isascii(299), ft_isprint(65));
	char	g[50] = "dingdongassadasd";
	ft_strlcat(g, s, 17);
	free(s);
	puts(g);
	return (0);
}
