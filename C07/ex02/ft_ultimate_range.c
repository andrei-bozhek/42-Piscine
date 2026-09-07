/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:43:33 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 16:59:01 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>
//
// int	ft_ultimate_range(int **range, int min, int max);
//
// void	test(int min, int max)
// {
// 	int	*range;
// 	int	size;
// 	int	i;
//
// 	range = NULL;
// 	size = ft_ultimate_range(&range, min, max);
// 	printf("ft_ultimate_range(%d, %d)\n", min, max);
// 	printf("size: %d\n", size);
// 	if (range == NULL)
// 		printf("range: NULL\n");
// 	else
// 	{
// 		printf("range: ");
// 		i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	printf("\n");
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
