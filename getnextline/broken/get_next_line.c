/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:38:00 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/13 20:27:46 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	nl_find(char *buf)
{
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == '\n')
			return (i);
	}
	return (-1);
}

void	addline(char *buf, t_list **stash)
{
	if (!buf || !stash)
		return ;
	ft_lstadd_back(stash, ft_lstnew(buf));
}

int	makeline(int fd, t_list **stash)
{
	char	*buf;
	int		b;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	buf[0] = '\0';
	b = 1;
	while (b > 0 && nl_find(buf) == -1)
	{
		b = read(fd, buf, BUFFER_SIZE);
		if (b == -1)
		{
			free(buf);
			return (0);
		}
		buf[b] = '\0';
		addline(buf, stash);
	}
	free(buf);
	return ;
}

char	*extractline(int size, t_list **stash)
{
	char	*line;
	t_list	*temp;
	int		i;
	int		j;

	if (!size || !stash)
		return (NULL);
	line = malloc(size + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while ((*stash)->content[j] != '\0')
			line[i + j] = (*stash)->content[j++];
		temp = (*stash)->next;
		free((*stash)->content);
		free(*stash);
		stash = &temp;
		i += j;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static t_list	*stash;
	char			*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = NULL;
	line = extractline(makeline(fd, &stash), &stash);
	return (line);
}
