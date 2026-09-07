/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:53:13 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 19:36:18 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	print_three_digits(t_entry *entries, int count, int n, int *first)
{
	int		rest;
	char	key[4];

	if (n >= 100)
		put_hundreds(entries, count, n, first);
	rest = n % 100;
	if (rest >= 20)
		putrest_more_than_20(entries, count, rest, first);
	else if (rest >= 10)
	{
		key[0] = '1';
		key[1] = (rest % 10) + '0';
		key[2] = '\0';
		if (!put_key(entries, count, key, first))
			return (0);
	}
	else if (rest > 0)
	{
		key[0] = rest + '0';
		key[1] = '\0';
		if (!put_key(entries, count, key, first))
			return (0);
	}
	return (1);
}

int	print_magnitude(t_entry *entries, int count, int zeros, int *first)
{
	char	*key;
	char	*val;
	int		i;

	if (zeros == 0)
		return (1);
	key = malloc(sizeof(char) * (zeros + 2));
	if (!key)
		return (0);
	key[0] = '1';
	i = 1;
	while (i <= zeros)
	{
		key[i] = '0';
		i++;
	}
	key[i] = '\0';
	val = get_value(entries, count, key);
	free(key);
	if (!val)
		return (0);
	print_word(val, first);
	return (1);
}

int	get_step(int remaining_len)
{
	if (remaining_len % 3 == 0)
		return (3);
	return (remaining_len % 3);
}

int	put_zero(char *str, t_entry *entries, int count)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	if (!put_key(entries, count, "0", &first))
		return (0);
	return (1);
}

int	process_all(char *str, t_entry *entries, int count)
{
	int	i;
	int	step;
	int	zeros;
	int	first;
	int	n;

	if (!can_handle(entries, count, ft_strlen(str)))
		return (0);
	i = 0;
	first = 1;
	put_zero(str, entries, count);
	while (i < ft_strlen(str))
	{
		step = get_step(ft_strlen(str) - i);
		zeros = ft_strlen(str) - (i + step);
		n = ft_atoi_slice(str, i, step);
		if (n > 0)
		{
			if (!print_three_digits(entries, count, n, &first)
				|| (!print_magnitude(entries, count, zeros, &first)))
				return (0);
		}
		i = i + step;
	}
	return (1);
}
