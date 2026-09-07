/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@c3r3s6.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:28:38 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 18:07:50 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_row(int grid[4][4], int row, int start, int step)
{
	int	col;
	int	highest;
	int	visible;
	int	i;

	col = start;
	highest = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			visible++;
		}
		col += step;
		i++;
	}
	return (visible);
}

int	count_col(int grid[4][4], int col, int start, int step)
{
	int	row;
	int	highest;
	int	visible;
	int	i;

	row = start;
	highest = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			visible++;
		}
		row += step;
		i++;
	}
	return (visible);
}

int	check_row(int grid[4][4], int clues[2][4][2], int row)
{
	int	left;
	int	right;

	left = count_row(grid, row, 0, 1);
	right = count_row(grid, row, 3, -1);
	if (left != clues[1][row][0])
		return (0);
	if (right != clues[1][row][1])
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int clues[2][4][2], int col)
{
	int	top;
	int	bottom;

	top = count_col(grid, col, 0, 1);
	bottom = count_col(grid, col, 3, -1);
	if (top != clues[0][col][0])
		return (0);
	if (bottom != clues[0][col][1])
		return (0);
	return (1);
}
