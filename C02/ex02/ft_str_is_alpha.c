/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:43:56 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:18:27 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Hello"));
// 	printf("%d\n", ft_str_is_alpha("Hello42"));
// 	printf("empty: %d\n", ft_str_is_alpha(""));
// 	return (0);
// }
