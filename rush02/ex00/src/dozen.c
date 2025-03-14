/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dozen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:00:37 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 16:08:19 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	dozen_size(char c, int i)
{
	if (!i && c <= '9' && c >= '2')
		return (true);
	if (i == 1 && c == '0')
		return (true);
	return (false);
}

bool	is_dozen(char *str)
{
	if (!str || !*str)
		return (false);
	if (*str > '9' || *str <= '1')
		return (false);
	str++;
	if (*str != '0')
		return (false);
	str++;
	if (*str != ' ' && *str != ':')
		return (false);
	return (true);
}
