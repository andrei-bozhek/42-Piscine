/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:47:18 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:19:58 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	a;
// 	int	b;
//
// 	a = 42;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div = %d, mod = %d\n", a, b);
// 	return (0);
// }
