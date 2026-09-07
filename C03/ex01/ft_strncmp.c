/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:44:19 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:18:06 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
//
// void	test(char *s1, char *s2, unsigned int n)
// {
// 	printf("n=%u -> ft: %d | strncmp: %d\n", n,
// 		ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
// }
//
// int	main(void)
// {
// 	test("abcdef", "abcxyz", 0);
// 	test("abcdef", "abcxyz", 3);
// 	test("abcdef", "abcxyz", 4);
// 	test("", "", 10);
// 	return (0);
// }
