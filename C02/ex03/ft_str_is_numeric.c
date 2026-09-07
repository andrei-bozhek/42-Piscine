/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:37:09 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:19:11 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("4242"));
// 	printf("%d\n", ft_str_is_numeric("42a"));
// 	printf("empty: %d\n", ft_str_is_numeric(""));
// 	return (0);
// }
