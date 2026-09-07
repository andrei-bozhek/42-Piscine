/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 14:17:53 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:27:41 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_put_address(unsigned long address)
{
	char	*hex;
	char	c;
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		c = hex[(address >> (i * 4)) & 15];
		write(1, &c, 1);
		i--;
	}
	write(1, ": ", 2);
}

static void	ft_put_byte(unsigned char c)
{
	char	*hex;
	char	out[2];

	hex = "0123456789abcdef";
	out[0] = hex[c / 16];
	out[1] = hex[c % 16];
	write(1, out, 2);
}

static void	ft_put_hex_column(unsigned char *p, unsigned int count)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < count)
			ft_put_byte(p[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

static void	ft_put_text(unsigned char *p, unsigned int count)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < count)
	{
		c = p[i];
		if (c < 32 || c > 126)
			c = '.';
		write(1, &c, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p;
	unsigned int	i;
	unsigned int	count;

	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		count = size - i;
		if (count > 16)
			count = 16;
		ft_put_address((unsigned long)(p + i));
		ft_put_hex_column(p + i, count);
		ft_put_text(p + i, count);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
// int	main(void)
// {
// 	char	str[] = "Bonjour les aminches\tc'est fou\ttout\t"
// 		"ce qu on peut faire avec\tprint_memory\n\tlol.lol\n ";
//
// 	ft_print_memory(str, sizeof(str));
// 	return (0);
// }
