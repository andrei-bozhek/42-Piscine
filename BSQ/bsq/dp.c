/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 17:44:52 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/20 16:12:06 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_min3(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	free_dp(int **dp, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
}

int	**create_dp(int height, int width)
{
	int	**dp;
	int	i;

	dp = malloc(sizeof(int *) * height);
	if (!dp)
		return (NULL);
	i = 0;
	while (i < height)
	{
		dp[i] = malloc(sizeof(int) * width);
		if (!dp[i])
		{
			free_dp(dp, i);
			return (NULL);
		}
		i++;
	}
	return (dp);
}
