/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 08:01:57 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 20:25:00 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	main(int argc, char **argv)
{
	char	*dict_path;
	char	*nbr;

	if (argc == 2)
	{
		dict_path = "numbers.dict";
		nbr = argv[1];
	}
	else if (argc == 3)
	{
		dict_path = argv[1];
		nbr = argv[2];
	}
	else
		return (write(1, "Error\n", 6));
	return (run(dict_path, nbr));
}

int	run(char *dict_path, char *nbr)
{
	char	*buf;
	t_entry	*dict;
	int		count;
	int		ok;

	if (!is_valid_number(nbr))
		return (write(1, "Error\n", 6));
	buf = read_file(dict_path);
	if (!buf)
		return (write(1, "Dict Error\n", 11));
	count = 0;
	dict = parse_dict(buf, &count);
	free(buf);
	if (!dict)
		return (write(1, "Dict Error\n", 11));
	ok = process_all(nbr, dict, count);
	free_entries(dict, count);
	if (!ok)
		return (write(1, "Dict Error\n", 11));
	write(1, "\n", 1);
	return (0);
}

int	is_valid_number(char *s)
{
	int	i;

	i = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		if (!is_digit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
