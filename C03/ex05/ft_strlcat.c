/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:42:36 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:21:09 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	slen = ft_strlen(src);
	dlen = 0;
	while (dlen < size && dest[dlen])
		dlen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	a[20] = "Hello ";
// 	char	b[20] = "Hello ";
//
// 	printf("ft      : %u [%s]\n", ft_strlcat(a, "World", 10), a);
// 	printf("original: %lu [%s]\n", strlcat(b, "World", 10), b);
// 	return (0);
// }
