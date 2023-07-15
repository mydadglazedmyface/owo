/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:03:04 by npongdon          #+#    #+#             */
/*   Updated: 2023/07/16 06:15:51 by npongdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

char	*ft_next(char *buf)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	if (buf[i] == '\0')
	{
		free(buf);
		return (NULL);
	}
	line = malloc(ft_strlen(buf) - i + 1);
	i += 1;
	j = 0;
	while (buf[i])
		line[j++] = buf[i++];
	free(buf);
	return (line);
}

char	*ft_line(char *buf)
{
	char	*line;
	int		i;

	i = 0;
	if (buf[i] == '\0')
		return (NULL);
	while (buf[i] && buf[i] != '\n')
		i++;
	line = malloc(i + 2);
	i = 0;
	while (buf[i] && buf[i] != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	return (line);
}

char	*read_file(int fd, char *res)
{
	char	*buf;
	int		b;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	buf[0] = '\0';
	if (!res)
	{
		res = malloc(1);
		res[0] = '\0';
	}
	b = 1;
	while (b > 0 && !ft_strchr(buf, '\n'))
	{
		b = read(fd, buf, BUFFER_SIZE);
		if (b == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[b] = '\0';
		res = ft_free(res, buf);
	}
	free(buf);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = read_file(fd, buf);
	if (!buf)
		return (NULL);
	line = ft_line(buf);
	buf = ft_next(buf);
	return (line);
}
