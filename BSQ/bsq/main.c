/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:47:26 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:09:03 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	put_error(void)
{
	write(1, "map error\n", 10);
}

static void	process_fd(int fd)
{
	t_map	map;
	int		length;

	map.data = read_all(fd, &length);
	map.rows = NULL;
	if (!map.data || !parse_map(&map, length))
	{
		put_error();
		free_map(&map);
		return ;
	}
	if (!solve_map(&map))
		put_error();
	else
		print_map(&map);
	free_map(&map);
}

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc == 1)
		process_fd(0);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			put_error();
		else
		{
			process_fd(fd);
			close(fd);
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
