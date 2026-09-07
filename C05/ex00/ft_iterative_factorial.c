/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 11:16:38 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/17 17:36:11 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
		result *= nb--;
	return (result);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("ft_iterative_factorial(5) = %d\n", ft_iterative_factorial(5));
// 	return (0);
// }
