/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abozhek <abozhek@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:01:55 by abozhek           #+#    #+#             */
/*   Updated: 2026/08/18 16:33:39 by abozhek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*make_word(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_separator(str[i], charset))
			i++;
		if (i > start)
			result[j++] = make_word(&str[start], i - start);
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
//
// void	test(char *str, char *charset)
// {
// 	char	**result;
// 	int		i;
//
// 	printf("str: [%s]\n", str);
// 	printf("charset: [%s]\n", charset);
// 	result = ft_split(str, charset);
// 	if (!result)
// 	{
// 		printf("NULL\n\n");
// 		return ;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d]: [%s]\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");
// }
//
// int	main(void)
// {
// 	test("Hello,42;Tokyo", ",;");
// 	test(",,,Hello;;;42,,Tokyo,,,", ",;");
// 	test("Hello World", " ");
// 	test("", ",;");
// 	test(",,,;;;", ",;");
// 	test("Hello World", "");
// 	return (0);
// }
