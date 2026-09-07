/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:58:21 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:17:43 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	a[20] = "xxxxxxxxxxxxxxxxxxx";
// 	char	b[20] = "xxxxxxxxxxxxxxxxxxx";
//
// 	ft_strncpy(a, "Hello", 10);
// 	strncpy(b, "Hello", 10);
// 	printf("ft      : [%s]\n", a);
// 	printf("original: [%s]\n", b);
// 	return (0);
// }
