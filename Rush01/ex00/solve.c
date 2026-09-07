/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhanada <yhanada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:35:55 by yhanada           #+#    #+#             */
/*   Updated: 2026/08/08 17:17:25 by yhanada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_state(int state[2][4]);
int		get_next(int try);
int		can_use(int state[2][4], int pos, int value);
void	set_value(int grid[4][4], int state[2][4], int pos, int value);
int		check_row(int grid[4][4], int hint[2][4][2], int row);
int		check_col(int grid[4][4], int hint[2][4][2], int col);

int	backtrack(int pos, int grid[4][4], int hint[2][4][2], int state[2][4])
{
	int	try;
	int	value;

	if (pos == 16)
		return (1);
	try = 210;
	while (try != 1)
	{
		value = get_next(try);
		try /= value;
		if (can_use(state, pos, value))
		{
			set_value(grid, state, pos, value);
			if ((pos % 4 != 3 || check_row(grid, hint, pos / 4))
				&& (pos / 4 != 3 || check_col(grid, hint, pos % 4))
				&& backtrack(pos + 1, grid, hint, state))
				return (1);
			set_value(grid, state, pos, 0);
		}
	}
	return (0);
}

int	solve(int hint[2][4][2], int grid[4][4])
{
	int	state[2][4];

	init_state(state);
	if (backtrack(0, grid, hint, state))
		return (1);
	return (0);
}
