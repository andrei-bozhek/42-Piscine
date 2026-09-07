/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:06:34 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:22:04 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	tab[5] = {5, 1, 4, 2, 3};
// 	int	i;
//
// 	ft_rev_int_tab(tab, 5);
// 	i = 0;
// 	while (i < 5)
// 		printf("%d ", tab[i++]);
// 	printf("\n");
// 	return (0);
// }
