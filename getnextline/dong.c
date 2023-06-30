/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dong.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:51:01 by npongdon          #+#    #+#             */
/*   Updated: 2023/06/27 21:51:00 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	char	buffer[1024];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Can't open.\n");
		return (1);
	}
	printf("%ld\n", read(fd, buffer, 1024));
	close(fd);
	return (0);
}
