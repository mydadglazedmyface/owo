/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:38:10 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/06 21:11:15 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;

	fd = open("yes", O_RDONLY);
	for (int i = 0; i < 6; i++)
	{
		printf("\n>");
		char *dam = get_next_line(fd);
		printf("%s", dam);
		free(dam);
	}
	close(fd);
	return (0);
}
