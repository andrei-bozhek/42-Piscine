/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:34:11 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/08 20:23:37 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (i == 0 || !ft_is_alnum(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	str[] = "salut, comment tu vas ? 42mots "
// 		"quarante-deux; cinquante+et+un";
//
// 	printf("[%s]\n", ft_strcapitalize(str));
// 	return (0);
// }
