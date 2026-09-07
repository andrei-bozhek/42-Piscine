/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 15:08:21 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/02 21:07:33 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static char	ft_char(int row, int col, int x, int y)
{
	if (row == 0 && col == 0)
		return ('A');
	if (row == 0 && col == x - 1)
		return ('C');
	if (row == y - 1 && col == 0)
		return ('C');
	if (row == y - 1 && col == x - 1)
		return ('A');
	if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
		return ('B');
	return (' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_putchar(ft_char(row, col, x, y));
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
