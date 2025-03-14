/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:13:35 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 16:16:54 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <rush02.h>
#include <struct.h>
#include <stdlib.h>

void	free_wp_lst(t_wperiod *lst)
{
	void	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
}

bool	is_period(char *str)
{
	return (!ft_strncmp(str, "1000", 4));
}
