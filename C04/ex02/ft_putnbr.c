/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:16:43 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/12 14:35:47 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	buf[11];
	long	n;
	int		i;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	i = 0;
	if (n == 0)
		buf[i++] = '0';
	while (n > 0)
	{
		buf[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &buf[--i], 1);
}
// int	main(void)
// {
// 	ft_putnbr(0);
// 	ft_putnbr(42);
// 	ft_putnbr(-42);
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
