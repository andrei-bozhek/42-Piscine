/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:16:58 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:09:48 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	*ft_copy_buffer(char *old, int used, int capacity)
{
	char	*new_buffer;
	int		i;

	new_buffer = malloc(capacity + 1);
	if (!new_buffer)
		return (NULL);
	i = 0;
	while (i < used)
	{
		new_buffer[i] = old[i];
		i++;
	}
	free(old);
	return (new_buffer);
}

static int	grow_buffer(char **buffer, int used, int *capacity)
{
	char	*new_buffer;

	if (*capacity > 1073741823)
		return (0);
	*capacity = *capacity * 2;
	new_buffer = ft_copy_buffer(*buffer, used, *capacity);
	if (!new_buffer)
		return (0);
	*buffer = new_buffer;
	return (1);
}

static int	read_content(int fd, char **buffer, int *length, int *capacity)
{
	ssize_t	bytes;

	bytes = 1;
	while (bytes > 0)
	{
		if (*length == *capacity
			&& !grow_buffer(buffer, *length, capacity))
			return (0);
		bytes = read(fd, *buffer + *length, *capacity - *length);
		if (bytes > 0)
			*length = *length + (int)bytes;
	}
	if (bytes < 0)
		return (0);
	return (1);
}

char	*read_all(int fd, int *length)
{
	char	*buffer;
	int		capacity;

	capacity = 4096;
	buffer = malloc(capacity + 1);
	if (!buffer)
		return (NULL);
	*length = 0;
	if (!read_content(fd, &buffer, length, &capacity))
	{
		free(buffer);
		return (NULL);
	}
	buffer[*length] = '\0';
	return (buffer);
}
