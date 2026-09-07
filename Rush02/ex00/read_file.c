/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 18:14:17 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 20:19:54 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	get_file_size(char *filename)
{
	int		fd;
	int		total;
	int		bytes_read;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	total = 0;
	bytes_read = read(fd, buffer, 1024);
	while (bytes_read > 0)
	{
		total += bytes_read;
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
	if (bytes_read == -1)
		return (-1);
	return (total);
}

char	*read_file(char *path)
{
	int		fd;
	int		n;
	int		size;
	char	*buf;

	size = get_file_size(path);
	fd = open(path, O_RDONLY);
	if (size < 0 || fd == -1)
		return (NULL);
	buf = malloc(size + 1);
	if (!buf)
	{
		close(fd);
		return (NULL);
	}
	n = read(fd, buf, size);
	close(fd);
	if (n == -1)
	{
		free(buf);
		return (NULL);
	}
	buf[n] = '\0';
	return (buf);
}
