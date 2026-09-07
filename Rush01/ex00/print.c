/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   print.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: omitsuki <omitsuki@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/08 16:40:21 by omitsuki         #+#    #+#              */
/*   Updated: 2026/08/08 21:34:02 by omitsuki        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	exchange(int board[4][4])
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			if (board[y][x] == 2)
				board[y][x] = 1;
			if (board[y][x] == 3)
				board[y][x] = 2;
			if (board[y][x] == 5)
				board[y][x] = 3;
			if (board[y][x] == 7)
				board[y][x] = 4;
			x++;
		}
		x = 0;
		y++;
	}
}

void	print_grid(int board[4][4])
{
	int		y;
	int		x;
	char	tmp;

	y = 0;
	x = 0;
	exchange(board);
	while (y < 4)
	{
		while (x < 4)
		{
			tmp = '0' + board[y][x];
			write(1, &tmp, 1);
			if (x < 3)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		x = 0;
		y++;
	}
}
