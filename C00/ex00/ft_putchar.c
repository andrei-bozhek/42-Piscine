/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:17:43 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/04 15:36:18 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//
// int	main(void)
// {
// 	ft_putchar('A');
// 	ft_putchar('\n');
// 	ft_putchar('0');
// 	ft_putchar('\n');
// 	return (0);
// }
