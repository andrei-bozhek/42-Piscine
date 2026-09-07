/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:42:07 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/19 19:20:31 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = malloc(ft_strlen(src) + 1);
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static void	ft_free_copies(t_stock_str *tab, int count)
{
	while (count > 0)
		free(tab[--count].copy);
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (ft_free_copies(tab, i), (t_stock_str *)0);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*av[] = {"Hello", "42", "Tokyo"};
// 	t_stock_str	*tab;
// 	int	i;
//
// 	tab = ft_strs_to_tab(3, av);
// 	i = 0;
// 	while (tab && tab[i].str)
// 	{
// 		printf("[%s] %d [%s]\n", tab[i].str, tab[i].size, tab[i].copy);
// 		free(tab[i].copy);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }
