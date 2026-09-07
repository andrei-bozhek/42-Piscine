/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:47:31 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/04 15:40:13 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_put_two(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_two(a);
			write(1, " ", 1);
			ft_put_two(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
//
// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
