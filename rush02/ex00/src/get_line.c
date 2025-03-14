/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:29:59 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 17:59:11 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <struct.h>
#include <unistd.h>
#include <stdio.h>
#include <rush02.h>
#include <stdlib.h>

t_char	*create_new_node(char c)
{
	t_char	*new;

	new = ft_calloc(sizeof(t_char));
	if (!new)
		return (NULL);
	new->c = c;
	return (new);
}

void	free_t_char(t_char *list)
{
	t_char	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

t_char	*add_char_in_lst(t_char **head, char c)
{
	t_char	*new;
	t_char	*tmp;

	new = create_new_node(c);
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (*head);
}

int	get_t_char_size(t_char *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

char	*lst_to_str(t_char *lst)
{
	char	*str;
	int		len;
	int		i;

	len = get_t_char_size(lst);
	if (len == 0)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (lst)
	{
		str[i] = lst->c;
		i++;
		lst = lst->next;
	}
	str[i] = '\0';
	return (str);
}
