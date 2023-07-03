/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:38:10 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/03 18:18:50 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	static char	*dam;
	int		fd;

	fd = open("no", O_RDONLY);
	for (int i = 1; i <= 5; i++)
	{
		dam = get_next_line(fd);
		if (!dam)
			printf("wtf did you just try to print?");
		else
			printf("%s|", dam);
	}
	printf("\n");
	free(dam);
	close(fd);
	return (0);
}
