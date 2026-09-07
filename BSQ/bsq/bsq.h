/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:18:43 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:08:17 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map
{
	char	*data;
	char	**rows;
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
}	t_map;

typedef struct s_square
{
	int	size;
	int	row;
	int	col;
}	t_square;

char	*read_all(int fd, int *length);
int		parse_header(t_map *map, int length, int *position);
int		parse_map(t_map *map, int length);
int		**create_dp(int height, int width);
void	free_dp(int **dp, int height);
int		ft_min3(int a, int b, int c);
int		solve_map(t_map *map);
void	fill_square(t_map *map, t_square *best);
void	print_map(t_map *map);
void	free_map(t_map *map);
void	put_error(void);

#endif
