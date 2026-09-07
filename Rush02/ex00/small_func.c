/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:16:48 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 19:36:28 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	else
		return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_substr(char *buf, int start, int len)
{
	char	*dst;
	int		i;

	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = buf[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_blank(char *buf, int start, int end)
{
	while (start < end)
	{
		if (!is_space(buf[start]))
			return (0);
		start++;
	}
	return (1);
}
