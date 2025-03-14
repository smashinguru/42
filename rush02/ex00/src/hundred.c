/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:40:55 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 17:35:43 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <rush02.h>

bool	hundred_size(char c, int i)
{
	if (!i && c == '1')
		return (true);
	if (i == 1 && c == '0')
		return (true);
	if (i == 2 && c == '0')
		return (true);
	return (false);
}

bool	is_hundred(char *str)
{
	if (!str || !*str)
		return (false);
	if (*str != '1' || *(str + 1) != '0' || *(str + 2) != '0')
		return (false);
	str += 3;
	if (*str != ' ' && *str != ':')
		return (false);
	return (true);
}
