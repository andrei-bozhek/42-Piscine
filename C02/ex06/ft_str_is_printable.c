/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:12:54 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:21:16 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello 42!"));
// 	printf("%d\n", ft_str_is_printable("Hello\n"));
// 	printf("empty: %d\n", ft_str_is_printable(""));
// 	return (0);
// }
