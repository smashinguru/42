/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:48:39 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 23:38:03 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <struct.h>
#include <rush02.h>
#include <unistd.h>

t_dict	get_unit(t_dict lst, char c)
{
	while (lst && (lst->num.addr)[0] != c)
		lst = lst->next;
	return (lst);
}

t_dict	check_special_case(t_dict lst, char *str)
{
	while (lst)
	{
		if (!ft_strncmp(str, lst->num.addr, lst->num.w_len))
			break ;
		lst = lst->next;
	}
	return (lst);
}

t_dict	get_dozen(t_dict lst, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 2)
		return (NULL);
	while (lst)
	{
		if (lst->num.addr[0] == *str)
			break ;
		lst = lst->next;
	}
	return (lst);
}

bool	is_more(t_period *ptr)
{
	while (ptr)
	{
		if (ft_strncmp(ptr->ptr, "000", 3))
			return (true);
		ptr = ptr->next;
	}
	return (false);
}

void	usual_case(t_dict *dict, t_period *ptr, char **str)
{
	t_dict	tmp;

	if (!ptr->next && ((ptr->prev && ft_strncmp(ptr->ptr, "000", 3))
			|| (ptr->cdu[0] != -1 && ptr->cdu[0] != '0')))
		write(1, " and ", 5);
	else if (ptr->cdu[0] != -1 && ptr->cdu[0] != '0')
		write(1, " ", 1);
	tmp = get_dozen(dict[dozen_index], *str);
	if (tmp)
	{
		print_value(tmp);
		write(1, "-", 1);
	}
	(*str) += ptr->cdu[1] != -1;
	tmp = get_unit(dict[unit_index], **str);
	if (tmp && tmp->num.addr[0] != '0')
		print_value(tmp);
}
