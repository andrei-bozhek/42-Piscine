/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:06:52 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/10 12:18:54 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
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
// 	printf("ft      : [%s]\n", ft_strcat(a, "42!"));
// 	printf("original: [%s]\n", strcat(b, "42!"));
// 	return (0);
// }
