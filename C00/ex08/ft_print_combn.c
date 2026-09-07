/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:24:17 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/04 15:42:36 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print_digits(int *digits, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = digits[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;

	i = -1;
	while (++i < n)
		digits[i] = i;
	while (1)
	{
		ft_print_digits(digits, n);
		i = n - 1;
		while (i >= 0 && digits[i] == 10 - n + i)
			i--;
		if (i < 0)
			break ;
		write(1, ", ", 2);
		digits[i]++;
		while (++i < n)
			digits[i] = digits[i - 1] + 1;
	}
}
//
// int	main(void)
// {
// 	ft_print_combn(1);
// 	ft_print_combn(2);
// 	ft_print_combn(3);
// 	return (0);
// }
