/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhanada <yhanada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:03:47 by yhanada           #+#    #+#             */
/*   Updated: 2026/08/09 16:12:26 by yhanada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char input[], int hint[2][4][2]);
int		solve(int hint[2][4][2], int grid[4][4]);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	hint[2][4][2];
	int	grid[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (parse_input(argv[1], hint) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (solve(hint, grid) != 1)
		write(1, "Error\n", 6);
	else
		print_grid(grid);
	return (0);
}
