/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:06:11 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 16:55:39 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_copy(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	if (size > 0)
		len += ft_strlen(sep) * (size - 1);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	len = 0;
	i = 0;
	while (i < size)
	{
		len = ft_copy(str, strs[i], len);
		if (i < size - 1)
			len = ft_copy(str, sep, len);
		i++;
	}
	str[len] = '\0';
	return (str);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*strs[] = {"Hello", "42", "Tokyo"};
// 	char	*result;
//
// 	result = ft_strjoin(3, strs, " - ");
// 	if (!result)
// 		return (1);
// 	printf("[%s]\n", result);
// 	free(result);
//
// 	result = ft_strjoin(3, strs, "");
// 	if (!result)
// 		return (1);
// 	printf("[%s]\n", result);
// 	free(result);
//
// 	result = ft_strjoin(1, strs, " - ");
// 	if (!result)
// 		return (1);
// 	printf("[%s]\n", result);
// 	free(result);
//
// 	result = ft_strjoin(0, strs, " - ");
// 	if (!result)
// 		return (1);
// 	printf("[%s]\n", result);
// 	free(result);
// 	return (0);
// }
