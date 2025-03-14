/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:06:27 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 23:12:55 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdbool.h>
# include <struct.h>
# include <stddef.h>

# ifndef DICT
#  define DICT "numbers.dict"
# endif /*DICT*/

void		*ft_calloc(size_t size);
void		translate(t_dict *dict, t_period *ptr);
t_dict		get_unit(t_dict lst, char c);
bool		no_double(t_dict *ptr);
void		free_t_period(t_period *ptr);
t_period	*get_p_lst(char *str, t_wperiod *lst);
bool		is_dozen(char *str);
bool		dozen_size(char c, int i);
bool		is_period(char *str);
int			ft_strncmp(char *s1, char *s2, int n);
void		*ft_memset(void *addr, size_t size, char c);
void		free_wp_lst(t_wperiod *lst);
void		free_t_char(t_char *list);
t_char		*add_char_in_lst(t_char **head, char c);
char		*lst_to_str(t_char *lst);
void		free_t_line(t_line *lst);
t_line		*add_in_lst(t_line **head, char *line);
void		*get_function(char *str);
t_wperiod	*create_wpnode(char *str, bool (*f)(char, int));
t_wperiod	*add_wp_in_lst(t_wperiod **head, char *str, bool (*f)(char, int));
bool		num_size(char c, int i);
bool		unit_size(char c, int i);
bool		teen_size(char c, int i);
bool		is_unit(char *str);
bool		is_period(char *str);
bool		is_teen(char *str);
int			word_size(char *str, bool (*f)(char, int));
bool		letter_size(char c, int i);
void		free_t_dict(t_dict *dict);
bool		is_hundred(char *str);
bool		hundred_size(char c, int i);
void		*ft_calloc(size_t size);
char		*lst_to_str(t_char *lst);
t_char		*add_char_in_lst(t_char **head, char c);
void		free_t_char(t_char *list);
t_index		get_head(void *ptr);
t_line		*get_dict(int fd);
void		print_value(t_dict val);
t_dict		get_unit(t_dict lst, char c);
t_dict		check_special_case(t_dict lst, char *str);
t_dict		get_dozen(t_dict lst, char *str);
bool		is_more(t_period *ptr);
bool		find_k_pow(t_wperiod *lst, int id);
bool		parse_number(char *str);
void		usual_case(t_dict *dict, t_period *ptr, char **str);

#endif /*RUSH02_H*/
