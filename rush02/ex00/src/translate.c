/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:26:59 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 23:09:27 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <struct.h>
#include <rush02.h>
#include <unistd.h>

void	print_hundred(t_dict *dict, t_period *ptr, char **str)
{
	t_dict	tmp;

	(*str) += ptr->cdu[0] != -1;
	if (ptr->cdu[0] == '0')
		return ;
	tmp = get_unit(dict[unit_index], ptr->cdu[0]);
	if (!tmp)
		return ((void)write(2, "Dict Error\n", 11));
	print_value(tmp);
	if (!dict[hundred_index])
		return ((void)write(2, "Dict Error\n", 11));
	write(1, " ", 1);
	print_value(dict[hundred_index]);
}

void	print_period(t_dict *dict, t_period *ptr)
{
	t_dict	tmp;

	if (!ptr->id)
		return ;
	if (!ft_strncmp(ptr->ptr, "000", 3))
		return ;
	write(1, " ", 1);
	tmp = dict[period_index];
	while (tmp && ptr->id != tmp->k_pow)
		tmp = tmp->next;
	if (!tmp)
		return ;
	print_value(tmp);
	if (is_more(ptr->next))
		write(1, ", ", 2);
}

bool	print_dozen(t_dict *dict, t_period *ptr, char **str)
{
	t_dict	tmp;

	(void)ptr;
	tmp = check_special_case(dict[teen_index], *str);
	if (tmp)
	{
		if (!ptr->next && ptr->prev && ptr->cdu[0] == '0')
			write(1, " and ", 5);
		print_value(tmp);
	}
	else
		usual_case(dict, ptr, str);
	return (true);
}

void	translate(t_dict *dict, t_period *ptr)
{
	char	*str;

	if (!ptr)
		return ((void)write(1, "\n", 1));
	str = ptr->ptr;
	if (ptr->cdu[0] != -1)
		print_hundred(dict, ptr, &str);
	print_dozen(dict, ptr, &str);
	return (print_period(dict, ptr), translate(dict, ptr->next));
}
