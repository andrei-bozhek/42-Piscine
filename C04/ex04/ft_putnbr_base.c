/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:31:49 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/12 14:37:18 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

static void	ft_put_positive(long n, char *base, int len)
{
	char	buf[33];
	int		i;

	i = 0;
	if (n == 0)
		buf[i++] = base[0];
	while (n > 0)
	{
		buf[i++] = base[n % len];
		n /= len;
	}
	while (i > 0)
		write(1, &buf[--i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	len = ft_base_len(base);
	if (!len)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_put_positive(n, base, len);
}
// int	main(void)
// {
// 	ft_putnbr_base(42, "0123456789");
// 	ft_putnbr_base(42, "01");
// 	ft_putnbr_base(-42, "0123456789ABCDEF");
// 	ft_putnbr_base(42, "poneyvif");
// 	ft_putnbr_base(42, "0");
// 	return (0);
// }
