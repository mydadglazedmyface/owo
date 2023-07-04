/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:38:00 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/04 23:20:50 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int	nl_find(char *buf, t_list **stash)
{
	int		i;
	t_list	*now;

	i = 0;
	now = *stash;
	while (now)
	{
		i += BUFFER_SIZE;
		now = now->next;
	}
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

void	makeline(int fd, t_list **stash, int *offset)
{
	char	*buf;
	int		b;
	int		n;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return ;
	n = -1;
	b = 1;
	while (n == -1 && b > 0)
	{
		b = read(fd, buf, BUFFER_SIZE);
		if (b == -1)
			return ;
		buf[b] = '\0';
		n = nl_find(buf, stash);
		if (n >= 0)
		{
			*offset += n + 1;
			free(buf);
			return ;
		}
		ft_lstadd_back(stash, ft_lstnew(buf));
	}
}

char	*get_next_line(int fd)
{
	static int		offset;
	char			*line;
	t_list			*stash;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	line = NULL;
	offset = 0;
	stash = ft_lstnew("");
	makeline(fd, &stash, &offset);
	return (line);
}
