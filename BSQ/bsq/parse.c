/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:09:37 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:11:19 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	valid_line(t_map *map, int start, int end)
{
	int	i;

	i = start;
	while (i < end)
	{
		if (map->data[i] != map->empty
			&& map->data[i] != map->obstacle)
			return (0);
		i++;
	}
	return (1);
}

static int	get_line(t_map *map, int length, int *position, int row)
{
	int	start;
	int	line_length;

	start = *position;
	while (*position < length && map->data[*position] != '\n')
		(*position)++;
	if (*position == length)
		return (0);
	line_length = *position - start;
	if (line_length <= 0)
		return (0);
	if (row == 0)
		map->width = line_length;
	if (line_length != map->width
		|| !valid_line(map, start, *position))
		return (0);
	map->rows[row] = map->data + start;
	map->data[*position] = '\0';
	(*position)++;
	return (1);
}

int	parse_map(t_map *map, int length)
{
	int	position;
	int	row;

	map->rows = NULL;
	map->width = 0;
	if (!parse_header(map, length, &position))
		return (0);
	map->rows = malloc(sizeof(char *) * map->height);
	if (!map->rows)
		return (0);
	row = 0;
	while (row < map->height)
	{
		if (!get_line(map, length, &position, row))
			return (0);
		row++;
	}
	return (position == length);
}
