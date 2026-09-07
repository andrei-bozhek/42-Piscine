/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:27 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:18:29 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	a;
// 	int	b;
//
// 	a = 10;
// 	b = 42;
// 	printf("before: %d %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("after : %d %d\n", a, b);
// 	return (0);
// }
