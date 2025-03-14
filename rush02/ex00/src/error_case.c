/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:39:31 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 22:52:15 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <struct.h>
#include <stdbool.h>
#include <rush02.h>
#include <stdio.h>

bool	no_double(t_dict *addr)
{
	t_dict	tmp;
	t_dict	ptr;
	int		i;

	i = 0;
	while (i != error)
	{
		ptr = addr[i];
		while (ptr)
		{
			tmp = ptr->next;
			while (tmp)
			{
				if (ptr->num.w_len == tmp->num.w_len)
					if (!ft_strncmp(ptr->num.addr,
							tmp->num.addr, ptr->num.w_len))
						return (false);
				tmp = tmp->next;
			}
			ptr = ptr->next;
		}
		i++;
	}
	return (true);
}
