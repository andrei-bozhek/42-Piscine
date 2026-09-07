/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:19:06 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/05 12:21:17 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	printf("ft: %d | original: %lu\n",
// 		ft_strlen("Hello 42!"), strlen("Hello 42!"));
// 	printf("ft: %d | original: %lu\n", ft_strlen(""), strlen(""));
// 	return (0);
// }
