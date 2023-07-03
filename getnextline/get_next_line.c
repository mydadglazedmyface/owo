/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:38:00 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/03 18:17:54 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int	nl_find(char *buff, t_list **stash)
{
	int	i;

	i = 0;
	while ((*stash)->next != NULL)
	{
		i += (*stash)->len;
		*stash = (*stash)->next;
	}
	while (buff[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	static int		offset;
	char			*buff[BUFFER_SIZE];
	t_list			stash;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!buff)
		buff = malloc(BUFFER_SIZE * sizeof(char));
	while (1)
	{
		if (read(fd, buff, BUFFER_SIZE) == -1)
			return (NULL);
	}
	return (buff);
}
