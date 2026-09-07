/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:26:53 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:19:03 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	div;
// 	int	mod;
//
// 	ft_div_mod(42, 5, &div, &mod);
// 	printf("42 / 5 = %d, remainder = %d\n", div, mod);
// 	return (0);
// }
