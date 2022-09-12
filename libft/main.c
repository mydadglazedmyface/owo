/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:49:03 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/12 22:59:30 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s = ft_strtrim(argv[1], argv[2]);
	if (argc == 3)
	{
		printf("%s\n", s);
		free(s);
	}
	return (0);
}
