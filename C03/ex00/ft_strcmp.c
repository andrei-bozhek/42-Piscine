/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:23:47 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:17:23 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
//
// void	test(char *s1, char *s2)
// {
// 	printf("[%s] [%s] -> ft: %d | strcmp: %d\n", s1, s2,
// 		ft_strcmp(s1, s2), strcmp(s1, s2));
// }
//
// int	main(void)
// {
// 	test("abc", "abc");
// 	test("abc", "abd");
// 	test("abd", "abc");
// 	test("", "abc");
// 	test("abc", "");
// 	return (0);
// }
