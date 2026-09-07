/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:26:44 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 15:41:36 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// void	test(int min, int max)
// {
// 	int	*range;
// 	int	i;
//
// 	range = ft_range(min, max);
// 	printf("ft_range(%d, %d): ", min, max);
// 	if (!range)
// 	{
// 		printf("NULL\n");
// 		return ;
// 	}
// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(range);
// }
//
// int	main(void)
// {
// 	test(3, 7);
// 	test(0, 3);
// 	test(-3, 2);
// 	test(5, 6);
// 	test(5, 5);
// 	test(10, 3);
// 	return (0);
// }
