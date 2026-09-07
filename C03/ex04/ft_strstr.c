/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 17:18:03 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:20:17 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
//
// void	test(char *str, char *find)
// {
// 	printf("find [%s] in [%s]\n", find, str);
// 	printf("ft      : [%s]\n", ft_strstr(str, find));
// 	printf("original: [%s]\n", strstr(str, find));
// }
//
// int	main(void)
// {
// 	test("Hello World", "World");
// 	test("Hello World", "lo");
// 	test("Hello World", "");
// 	test("Hello World", "Tokyo");
// 	return (0);
// }
