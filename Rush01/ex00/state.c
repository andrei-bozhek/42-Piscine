/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   state.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: omitsuki <omitsuki@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/08 17:03:30 by omitsuki         #+#    #+#              */
/*   Updated: 2026/08/08 20:53:26 by omitsuki        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	init_state(int state[2][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			state[i][j] = 210;
			j++;
		}
		i++;
	}
}

int	get_next(int try)
{
	if (try % 2 == 0)
		return (2);
	else if (try % 3 == 0)
		return (3);
	else if (try % 5 == 0)
		return (5);
	else
		return (7);
}

int	can_use(int state[2][4], int pos, int value)
{
	if (state[0][pos / 4] % value != 0)
		return (0);
	if (state[1][pos % 4] % value != 0)
		return (0);
	return (1);
}

void	set_value(int grid[4][4], int state[2][4], int pos, int value)
{
	int	old;

	old = grid[pos / 4][pos % 4];
	if (value == 0)
	{
		state[0][pos / 4] *= old;
		state[1][pos % 4] *= old;
	}
	else
	{
		state[0][pos / 4] /= value;
		state[1][pos % 4] /= value;
	}
	grid[pos / 4][pos % 4] = value;
}
