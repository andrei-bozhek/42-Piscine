/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:18:52 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:23:39 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
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
// 	ft_sort_int_tab(tab, 5);
// 	i = 0;
// 	while (i < 5)
// 		printf("%d ", tab[i++]);
// 	printf("\n");
// 	return (0);
// }
