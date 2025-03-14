/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoufle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:02:37 by admoufle          #+#    #+#             */
/*   Updated: 2025/03/09 23:04:53 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <rush02.h>
#include <struct.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

t_period	*create_p(char cdu[3], t_wperiod *lst)
{
	static int	i;
	t_period	*new;

	if (!find_k_pow(lst, i) && i)
		return (NULL);
	new = ft_calloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->id = i++;
	new->cdu[0] = cdu[0];
	new->cdu[1] = cdu[1];
	new->cdu[2] = cdu[2];
	new->cdu[3] = 0;
	new->ptr = new->cdu;
	new->ptr += (cdu[0] == -1) + (cdu[1] == -1);
	return (new);
}

static bool	is_numeric(char *str)
{
	int	i;

	if (!str || !*str || *str == '-')
		return (write(2, "Error\n", 6), false);
	i = (*str == '+');
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (write(2, "Error\n", 6), false);
		i++;
	}
	return (true);
}

void	fill_cdu(char *str, char *cdu, int i)
{
	if (i >= 2)
		cdu[0] = str[i - 2];
	else
		cdu[0] = -1;
	if (i >= 1)
		cdu[1] = str[i - 1];
	else
		cdu[1] = -1;
	cdu[2] = str[i];
}

t_period	*get_p_lst(char *str, t_wperiod *lst)
{
	int			i;
	t_period	*new;
	t_period	*head;
	char		cdu[3];

	i = 0;
	new = NULL;
	head = NULL;
	if (!is_numeric(str) || !str)
		return (NULL);
	while (str[i] && str[i + 1])
		i++;
	while (i >= 0)
	{
		fill_cdu(str, cdu, i);
		new = create_p(cdu, lst);
		if (!new)
			return (NULL);
		new->next = head;
		if (head)
			head->prev = new;
		head = new;
		i -= 3;
	}
	return (head);
}
