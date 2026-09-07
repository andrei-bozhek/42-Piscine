/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:05:12 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 19:35:49 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	count_lines(char *buf)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (buf[i])
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int	ft_atoi_slice(char *str, int index, int len)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < len)
	{
		res = res * 10 + (str[index + i] - '0');
		i++;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	can_handle(t_entry *entries, int count, int len)
{
	char	key[64];
	int		zeros;
	int		i;

	zeros = len - get_step(len);
	if (zeros == 0)
		return (1);
	if (zeros > 62)
		return (0);
	key[0] = '1';
	i = 1;
	while (i <= zeros)
		key[i++] = '0';
	key[i] = '\0';
	return (get_value(entries, count, key) != NULL);
}
