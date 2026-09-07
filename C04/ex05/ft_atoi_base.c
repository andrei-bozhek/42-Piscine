/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 11:27:06 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/12 14:38:54 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	ft_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

static int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	len;
	int	nbr;

	len = ft_base_len(base);
	if (!len)
		return (0);
	i = 0;
	sign = 1;
	while (ft_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	nbr = 0;
	while (ft_index(str[i], base) >= 0)
		nbr = nbr * len + ft_index(str[i++], base);
	return (nbr * sign);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("101010", "01"));
// 	printf("%d\n", ft_atoi_base("-2A", "0123456789ABCDEF"));
// 	printf("%d\n", ft_atoi_base("   ---42", "0123456789"));
// 	printf("invalid base: %d\n", ft_atoi_base("42", "001"));
// 	return (0);
// }
