/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:18:29 by npongdon          #+#    #+#             */
/*   Updated: 2022/09/15 15:25:39 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	**arr = ft_split("", 'z');
	int		i;

	i = 0;
	while (arr[i])
	{
		printf("> %s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
