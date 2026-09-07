/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_en.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:14:19 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 19:36:11 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

char	*get_value(t_entry *entries, int count, char *key)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (ft_strcmp(entries[i].key, key) == 0)
			return (entries[i].value);
		i++;
	}
	return (NULL);
}

void	print_word(char *word, int *first)
{
	if (!word)
		return ;
	if (!(*first))
		write(1, " ", 1);
	ft_putstr(word);
	*first = 0;
}

int	put_key(t_entry *entries, int count, char *key, int *first)
{
	char	*val;

	val = get_value(entries, count, key);
	if (!val)
		return (0);
	print_word(val, first);
	return (1);
}

int	put_hundreds(t_entry *entries, int count, int n, int *first)
{
	char	key[2];

	key[0] = (n / 100) + '0';
	key[1] = '\0';
	if (!put_key(entries, count, key, first))
		return (0);
	if (!put_key(entries, count, "100", first))
		return (0);
	return (1);
}

int	putrest_more_than_20(t_entry *entries, int count, int rest, int *first)
{
	char	key[3];

	key[0] = (rest / 10) + '0';
	key[1] = '0';
	key[2] = '\0';
	if (!put_key(entries, count, key, first))
		return (0);
	if (rest % 10 != 0)
	{
		key[0] = (rest % 10) + '0';
		key[1] = '\0';
		if (!put_key(entries, count, key, first))
			return (0);
	}
	return (1);
}
