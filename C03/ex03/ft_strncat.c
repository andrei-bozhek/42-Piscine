/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 15:39:28 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:19:38 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	a[50] = "Hello ";
// 	char	b[50] = "Hello ";
//
// 	printf("ft      : [%s]\n", ft_strncat(a, "World", 3));
// 	printf("original: [%s]\n", strncat(b, "World", 3));
// 	return (0);
// }
