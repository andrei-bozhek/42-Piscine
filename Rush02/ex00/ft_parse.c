/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 09:57:43 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 19:35:59 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	parse_line(char *buf, int start, int end, t_entry *e)
{
	int	i;
	int	key_end;
	int	value_end;

	while (start < end && is_space(buf[start]))
		start++;
	i = start;
	while (i < end && is_digit(buf[i]))
		i++;
	key_end = i;
	if (key_end == start)
		return (0);
	while (i < end && is_space(buf[i]))
		i++;
	if (i >= end || buf[i] != ':')
		return (0);
	i++;
	while (i < end && is_space(buf[i]))
		i++;
	value_end = end;
	while (value_end > i && is_space(buf[value_end - 1]))
		value_end--;
	e->key = ft_substr(buf, start, key_end - start);
	e->value = ft_substr(buf, i, value_end - i);
	return (e->key && e->value);
}

void	free_entries(t_entry *entries, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(entries[i].key);
		free(entries[i].value);
		i++;
	}
	free(entries);
}

int	parse_entry(char *buf, int start, int end, t_entry *entry)
{
	if (is_blank(buf, start, end))
		return (1);
	return (parse_line(buf, start, end, entry));
}

int	fill_entries(char *buf, t_entry *entries)
{
	int	i;
	int	n;
	int	start;

	i = 0;
	n = 0;
	while (buf[i])
	{
		start = i;
		while (buf[i] && buf[i] != '\n')
			i++;
		if (!parse_entry(buf, start, i, &entries[n]))
		{
			free_entries(entries, n);
			return (-1);
		}
		if (!is_blank(buf, start, i))
			n++;
		if (buf[i] == '\n')
			i++;
	}
	return (n);
}

t_entry	*parse_dict(char *buf, int *count)
{
	t_entry	*entries;
	int		n;

	entries = malloc(sizeof(t_entry) * count_lines(buf));
	if (!entries)
		return (NULL);
	n = fill_entries(buf, entries);
	if (n < 0)
		return (NULL);
	*count = n;
	return (entries);
}
