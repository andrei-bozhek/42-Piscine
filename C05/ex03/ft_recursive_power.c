/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:02:34 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/17 17:38:16 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("ft_recursive_power(2, 10) = %d\n", ft_recursive_power(2, 10));
// 	return (0);
// }
