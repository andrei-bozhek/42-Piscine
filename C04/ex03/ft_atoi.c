/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:08:17 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/12 14:36:31 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (ft_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + str[i++] - '0';
	return (nbr * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
//
// void	test(char *str)
// {
// 	printf("[%s] -> ft: %d | atoi: %d\n", str, ft_atoi(str), atoi(str));
// }
//
// int	main(void)
// {
// 	test("42");
// 	test("   ---+--+1234ab567");
// 	test("-2147483648");
// 	test("abc");
// 	return (0);
// }
