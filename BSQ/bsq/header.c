/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 14:38:11 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:10:32 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	ft_atoi_n(char *str, int length)
{
	int	i;
	int	number;
	int	digit;

	if (length <= 0)
		return (-1);
	i = 0;
	number = 0;
	while (i < length)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		digit = str[i] - '0';
		if (number > (2147483647 - digit) / 10)
			return (-1);
		number = number * 10 + digit;
		i++;
	}
	return (number);
}

static int	valid_symbols(t_map *map)
{
	if (map->empty < 32 || map->empty > 126)
		return (0);
	if (map->obstacle < 32 || map->obstacle > 126)
		return (0);
	if (map->full < 32 || map->full > 126)
		return (0);
	if (map->empty == map->obstacle || map->empty == map->full)
		return (0);
	if (map->obstacle == map->full)
		return (0);
	return (1);
}

int	parse_header(t_map *map, int length, int *position)
{
	int	header_length;

	header_length = 0;
	while (header_length < length
		&& map->data[header_length] != '\n')
		header_length++;
	if (header_length == length || header_length < 4)
		return (0);
	map->empty = map->data[header_length - 3];
	map->obstacle = map->data[header_length - 2];
	map->full = map->data[header_length - 1];
	if (!valid_symbols(map))
		return (0);
	map->height = ft_atoi_n(map->data, header_length - 3);
	if (map->height <= 0)
		return (0);
	*position = header_length + 1;
	return (1);
}
