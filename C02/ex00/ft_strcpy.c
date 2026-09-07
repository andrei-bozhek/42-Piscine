/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:14:38 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:17:08 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	a[50];
// 	char	b[50];
//
// 	printf("ft      : [%s]\n", ft_strcpy(a, "Hello 42!"));
// 	printf("original: [%s]\n", strcpy(b, "Hello 42!"));
// 	return (0);
// }
