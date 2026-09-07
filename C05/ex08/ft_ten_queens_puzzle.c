/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:36:41 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/17 17:42:56 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_safe(int *queens, int col, int row)
{
	int	i;
	int	diff;

	i = 0;
	while (i < col)
	{
		diff = queens[i] - row;
		if (diff < 0)
			diff = -diff;
		if (queens[i] == row || diff == col - i)
			return (0);
		i++;
	}
	return (1);
}

static void	ft_print_solution(int *queens)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

static int	ft_place(int *queens, int col)
{
	int	row;
	int	count;

	if (col == 10)
	{
		ft_print_solution(queens);
		return (1);
	}
	row = 0;
	count = 0;
	while (row < 10)
	{
		if (ft_safe(queens, col, row))
		{
			queens[col] = row;
			count += ft_place(queens, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];

	return (ft_place(queens, 0));
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("solutions: %d\n", ft_ten_queens_puzzle());
// 	return (0);
// }
