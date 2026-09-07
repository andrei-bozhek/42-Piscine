/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 20:11:43 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/19 19:21:17 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static void	ft_putnbr(int nb)
{
	char	buf[11];
	int		i;

	i = 0;
	if (nb == 0)
		buf[i++] = '0';
	while (nb > 0)
	{
		buf[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i > 0)
		write(1, &buf[--i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
// int	main(void)
// {
// 	t_stock_str	tab[2];
//
// 	tab[0].size = 5;
// 	tab[0].str = "Hello";
// 	tab[0].copy = "Hello";
// 	tab[1].str = 0;
// 	ft_show_tab(tab);
// 	return (0);
// }
