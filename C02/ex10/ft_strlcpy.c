/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 20:46:29 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:24:18 by abozhek          ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	a[6];
// 	char	b[6];
//
// 	printf("ft len      : %u, str: [%s]\n", ft_strlcpy(a, "Hello 42!", 6), a);
// 	printf("original len: %lu, str: [%s]\n", strlcpy(b, "Hello 42!", 6), b);
// 	return (0);
// }
