/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:26:46 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 15:07:41 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
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
// char	*ft_strdup(char *src);
//
// void	test(char *src)
// {
// 	char	*original;
// 	char	*ft;
//
// 	original = strdup(src);
// 	ft = ft_strdup(src);
// 	printf("src       : \"%s\"\n", src);
// 	printf("strdup    : \"%s\"\n", original);
// 	printf("ft_strdup : \"%s\"\n", ft);
// 	printf("\n");
// 	free(original);
// 	free(ft);
// }
//
// int	main(void)
// {
// 	test("Hello 42!");
// 	test("");
// 	test("a");
// 	test("Hello world");
// 	return (0);
// }
