/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:23:03 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 13:46:52 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	unit_size(char c, int i)
{
	if (c <= '9' && c >= '0' && !i)
		return (true);
	return (false);
}

bool	is_unit(char *str)
{
	if (!str || !*str)
		return (false);
	if (*str > '9' || *str < '0')
		return (false);
	str++;
	if (*str != ' ' && *str != ':')
		return (false);
	return (true);
}

bool	num_size(char c, int i)
{
	if (!i && c == '1')
		return (true);
	return (c == '0');
}

bool	letter_size(char c, int i)
{
	(void)i;
	return (c != '\n');
}

int	word_size(char *str, bool (*f)(char, int))
{
	int	i;

	i = 0;
	while (str && str[i] && f(str[i], i))
		i++;
	return (i);
}
