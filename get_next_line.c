/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:34:23 by hsilk             #+#    #+#             */
/*   Updated: 2022/01/09 13:28:13 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_save_remainder(char *buf)
{
	int		p_n;
	char	*tmp;
	int		i;
	int		k;

	i = 0;
	p_n = ft_strchr(buf, '\n');
	if (p_n == -1)
	{
		free(buf);
		return (NULL);
	}
	tmp = buf;
	buf = malloc(ft_strlen(tmp) - p_n + 1);
	if (!buf)
		return (NULL);
	k = ft_strlen(tmp);
	while (p_n + i + 1 < k)
	{
		buf[i] = tmp[p_n + i + 1];
		i++;
	}
	buf[i] = '\0';
	free(tmp);
	return (buf);
}

char	*ft_leave_line(char *buf)
{
	int		i;
	int		p_n;
	char	*line;

	if (!buf[0])
		return (NULL);
	i = 0;
	p_n = ft_strchr(buf, '\n');
	if (p_n == -1)
		p_n = ft_strlen(buf);
	line = malloc(p_n + 2);
	if (!line)
		return (NULL);
	while (i < p_n)
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}	
	line[i] = '\0';
	return (line);
}

static char	*ft_get_line(int fd, char *buf)
{
	int		bwr;
	int		p_n;
	char	*readline;

	p_n = -1;
	readline = malloc(BUFFER_SIZE_GNL + 1);
	if (!readline)
		return (NULL);
	bwr = 1;
	while (p_n == -1 && bwr > 0)
	{
		bwr = read(fd, readline, BUFFER_SIZE_GNL);
		readline[bwr] = '\0';
		buf = ft_strjoin(buf, readline, 0);
		p_n = ft_strchr(readline, '\n');
	}
	free(readline);
	if (bwr == -1)
		return (NULL);
	return (buf);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE_GNL < 0 || read(fd, NULL, 0) < 0)
		return (0);
	buf = ft_get_line(fd, buf);
	if (!buf)
		return (NULL);
	line = ft_leave_line(buf);
	buf = ft_save_remainder(buf);
	return (line);
}
