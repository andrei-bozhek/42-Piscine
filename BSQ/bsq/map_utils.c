/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 20:51:39 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:13:37 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		write(1, map->rows[i], map->width);
		write(1, "\n", 1);
		i++;
	}
}

void	free_map(t_map *map)
{
	free(map->rows);
	free(map->data);
}
