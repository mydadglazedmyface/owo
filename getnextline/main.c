/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:38:10 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/04 19:28:37 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*dam;
	int		fd;

	fd = open("yes", O_RDONLY);
	dam = malloc(1000 * sizeof(char));
	dam = get_next_line(fd);
	if (!dam)
		printf("NULL");
	else
		printf("%s", dam);	
	printf("\n");
	free(dam);
	close(fd);
	return (0);
}
