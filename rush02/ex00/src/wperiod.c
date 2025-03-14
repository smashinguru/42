/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wperiod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:19:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 22:25:29 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <struct.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <rush02.h>
#include <stdio.h>

t_word	get_value(char	*str, bool (*f)(char, int))
{
	t_word	val;

	val.addr = str;
	val.w_len = word_size(str, f);
	return (val);
}

bool	fill_value(t_wperiod *ptr, char *str, bool (*f)(char, int))
{
	t_wperiod	new;
	bool		colon;

	new.num = get_value(str, f);
	new.k_pow = new.num.w_len / 3;
	str += new.num.w_len;
	colon = false;
	while (*str && (*str == ' ' || !colon))
	{
		if (*str == ':')
			colon = true;
		if (*str != ' ' && !colon)
			return (write(2, "Dict Error\n", 11), false);
		str++;
	}
	new.letters = get_value(str, letter_size);
	new.next = NULL;
	*ptr = new;
	return (true);
}

t_wperiod	*create_wpnode(char *str, bool (*f)(char, int))
{
	t_wperiod	*new;

	new = malloc(sizeof(t_wperiod));
	if (!new)
		return (NULL);
	fill_value(new, str, f);
	return (new);
}

t_wperiod	*add_wp_in_lst(t_wperiod **head, char *str, bool (*f)(char, int))
{
	t_wperiod	*new;
	t_wperiod	*tmp;

	if (!str)
		return (NULL);
	new = create_wpnode(str, f);
	if (!new)
		return (free_wp_lst(*head), NULL);
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (*head);
}
