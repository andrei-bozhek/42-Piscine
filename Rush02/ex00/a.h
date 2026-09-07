/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefunaha <kefunaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:14:33 by kefunaha          #+#    #+#             */
/*   Updated: 2026/08/16 23:06:03 by kefunaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_entry
{
	char	*key;
	char	*value;
}	t_entry;

char	*read_file(char *path);
int		parse_line(char *buf, int start, int end, t_entry *e);
int		is_space(char c);
int		is_digit(char c);
char	*ft_substr(char *buf, int start, int len);
int		count_lines(char *buf);
int		is_blank(char *buf, int start, int end);
void	free_entries(t_entry *entries, int count);
t_entry	*parse_dict(char *buf, int *count);
char	*get_value(t_entry *entries, int count, char *key);
void	print_word(char *word, int *first);
int		put_key(t_entry *entries, int count, char *key, int *first);
int		put_hundreds(t_entry *entries, int count, int n, int *first);
int		putrest_more_than_20(t_entry *entries, int count, int rest, int *first);
int		print_three_digits(t_entry *entries, int count, int n, int *first);
int		print_magnitude(t_entry *entries, int count, int zeros, int *first);
int		get_step(int remaining_len);
int		process_all(char *str, t_entry *entries, int count);
void	ft_putstr(char *str);
int		ft_atoi_slice(char *str, int index, int len);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		get_file_size(char *filename);
int		run(char *dict_path, char *nbr);
int		is_valid_number(char *s);
int		can_handle(t_entry *entries, int count, int len);
#endif
