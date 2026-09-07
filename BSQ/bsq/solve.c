/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 19:23:16 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:12:51 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	update_best(t_square *best, int size, int row, int col)
{
	if (size > best->size)
	{
		best->size = size;
		best->row = row;
		best->col = col;
	}
}

static void	check_cell(t_map *map, int **dp, t_square *best, int pos[2])
{
	int	i;
	int	j;

	i = pos[0];
	j = pos[1];
	if (map->rows[i][j] == map->obstacle)
		dp[i][j] = 0;
	else if (i == 0 || j == 0)
		dp[i][j] = 1;
	else
		dp[i][j] = 1 + ft_min3(dp[i - 1][j],
				dp[i][j - 1], dp[i - 1][j - 1]);
	update_best(best, dp[i][j], i, j);
}

static void	find_biggest_square(t_map *map, int **dp, t_square *best)
{
	int	pos[2];

	pos[0] = 0;
	while (pos[0] < map->height)
	{
		pos[1] = 0;
		while (pos[1] < map->width)
		{
			check_cell(map, dp, best, pos);
			pos[1]++;
		}
		pos[0]++;
	}
}

void	fill_square(t_map *map, t_square *best)
{
	int	i;
	int	j;
	int	start_row;
	int	start_col;

	start_row = best->row - best->size + 1;
	start_col = best->col - best->size + 1;
	i = start_row;
	while (i <= best->row)
	{
		j = start_col;
		while (j <= best->col)
		{
			map->rows[i][j] = map->full;
			j++;
		}
		i++;
	}
}

int	solve_map(t_map *map)
{
	int			**dp;
	t_square	best;

	dp = create_dp(map->height, map->width);
	if (!dp)
		return (0);
	best.size = 0;
	best.row = 0;
	best.col = 0;
	find_biggest_square(map, dp, &best);
	fill_square(map, &best);
	free_dp(dp, map->height);
	return (1);
}
