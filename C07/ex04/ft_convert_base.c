/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:06:09 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 16:43:35 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_base_valid(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_number_len(long nbr, int base_len)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= base_len)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*result;
	long	n;
	int		len;
	int		base_len;

	n = nbr;
	base_len = ft_strlen(base);
	len = ft_number_len(n, base_len);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (len-- && result[len] != '-')
	{
		result[len] = base[n % base_len];
		n /= base_len;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(n, base_to));
}

// #include <stdio.h>
//
// void	test(char *nbr, char *from, char *to)
// {
// 	char	*result;
//
// 	result = ft_convert_base(nbr, from, to);
// 	printf("[%s] -> ", nbr);
// 	if (!result)
// 	{
// 		printf("NULL\n");
// 		return ;
// 	}
// 	printf("[%s]\n", result);
// 	free(result);
// }
//
// int	main(void)
// {
// 	test("42", "0123456789", "01");
// 	test("101010", "01", "0123456789");
// 	test("42", "0123456789", "0123456789ABCDEF");
// 	test("-42", "0123456789", "0123456789ABCDEF");
// 	test("   ---42", "0123456789", "01");
// 	test("0", "0123456789", "01");
// 	test("42", "0", "01");
// 	test("42", "0123456789", "001");
// 	return (0);
// }
