/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:56:55 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 23:00:43 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <struct.h>

bool	parse_number(char *str)
{
	int	i;

	if (!str)
		return (false);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (!str[i]);
}

void	free_t_period(t_period *ptr)
{
	void	*tmp;

	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}

bool	find_k_pow(t_wperiod *lst, int id)
{
	while (lst)
	{
		if (lst->k_pow == id)
			return (true);
		lst = lst->next;
	}
	return (false);
}
