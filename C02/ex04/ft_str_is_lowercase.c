/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:31:42 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:19:54 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("hello"));
// 	printf("%d\n", ft_str_is_lowercase("Hello"));
// 	printf("empty: %d\n", ft_str_is_lowercase(""));
// 	return (0);
// }
