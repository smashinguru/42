/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:45:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 23:29:36 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <struct.h> 
#include <rush02.h>
#include <stdlib.h>

void	print_value(t_dict val)
{
	int	i;

	i = 0;
	if (!val)
		return ;
	while (i < val->letters.w_len)
		i++;
	write(1, val->letters.addr, i);
}

bool	t_line_to_dict(t_dict *dict, t_line *lhead)
{
	void	*f;
	t_index	index;

	while (lhead)
	{
		f = get_function(lhead->line);
		index = get_head(f);
		if (index == error)
			return (write(2, "Dict Error\n", 11), false);
		add_wp_in_lst(&dict[get_head(f)], lhead->line, f);
		lhead = lhead->next;
	}
	return (true);
}	

void	free_all(t_dict *dict, t_line *lhead, t_period *ptr, void *str)
{
	free(str);
	free_t_period(ptr);
	free_t_line(lhead);
	free_t_dict(dict);
}

char	*read_stdin(void)
{
	t_line	*ptr;
	char	*str;

	ptr = get_dict(0);
	if (!ptr)
		return (NULL);
	str = ptr->line;
	free(ptr);
	return (str);
}

int	main(int ac, char **av)
{
	t_line		*lhead;
	t_dict		dict[5];
	t_period	*ptr;
	char		*str;
	char		*path;

	ft_memset(dict, sizeof(t_dict) * 5, 0);
	path = (char *[]){av[1], DICT}[(ac == 1 || ac == 2)];
	str = NULL;
	lhead = get_dict(open(path, O_RDONLY));
	if (!lhead)
		return (1);
	t_line_to_dict(dict, lhead);
	if (ac > 1)
		ptr = get_p_lst(av[ac - 1], dict[period_index]);
	else
	{
		str = read_stdin();
		ptr = get_p_lst(str, dict[period_index]);
	}
	if (no_double(dict) && ptr)
		translate(dict, ptr);
	return (free_all(dict, lhead, ptr, str), 0);
}
