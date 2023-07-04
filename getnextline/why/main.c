/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:38:10 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/03 18:40:38 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*dam;
	int		fd;

	fd = open("no", O_RDONLY);
	for (int i = 1; i <= 5; i++)
	{
		dam = red_ham(fd);
		if (!dam)
			printf("wtf did you just try to print?");
		else
			printf("%s|", dam);
		free(dam);
	}
	printf("\n");
	close(fd);
	return (0);
}
