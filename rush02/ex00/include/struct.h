/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:09:43 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 21:16:15 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_line
{
	char			*line;
	struct s_line	*next;
}	t_line;

typedef struct s_char
{
	char			c;
	struct s_char	*next;
	struct s_char	*prev;
}	t_char;

typedef struct s_word
{
	char	*addr;
	int		w_len;
}	t_word;

typedef struct s_wperiod
{
	int					k_pow;
	t_word				num;
	t_word				letters;
	struct s_wperiod	*next;
}	t_wperiod;

typedef struct s_period
{
	int				id;
	char			cdu[4];
	char			*ptr;
	struct s_period	*next;
	struct s_period	*prev;
}	t_period;

typedef t_wperiod	t_unit;
typedef t_wperiod	t_dozen;
typedef t_wperiod	t_hundred;
typedef t_wperiod	*t_dict;

typedef enum e_enum
{
	unit_index = 0,
	teen_index,
	dozen_index,
	hundred_index,
	period_index,
	error
}t_index;

#endif /*STRUCT_H*/
