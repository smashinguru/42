/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teens.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:22:27 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 16:09:06 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	teen_size(char c, int i)
{
	if (!i && c == '1')
		return (true);
	if (i == 1 && c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	is_teen(char *str)
{
	if (!str || !*str)
		return (false);
	if (*str != '1')
		return (false);
	str++;
	if (*str < '0' || *str > '9')
		return (false);
	str++;
	if (*str != ' ' && *str != ':')
		return (false);
	return (true);
}
