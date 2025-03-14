/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:07:01 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 23:18:45 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <struct.h>
#include <unistd.h>
#include <rush02.h>

void	free_t_line(t_line *lst)
{
	t_line	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->line);
		free(tmp);
	}
}

void	*ft_calloc(size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = 0;
	return (ptr);
}

t_line	*new_node(char *line)
{
	t_line	*new;

	if (!line)
		return (NULL);
	new = ft_calloc(sizeof(t_line));
	if (!new)
		return (NULL);
	new->line = line;
	return (new);
}

t_line	*add_in_lst(t_line **head, char *line)
{
	t_line	*new;
	t_line	*tmp;

	new = new_node(line);
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
	(*tmp).next = new;
	return (*head);
}

t_line	*get_dict(int fd)
{
	char	*str;
	t_char	*head;
	t_line	*lhead;
	char	c;

	lhead = NULL;
	if (fd < 0)
		return (write(2, "Dict Error\n", 11), NULL);
	head = NULL;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
		{
			str = lst_to_str(head);
			if (str && !add_in_lst(&lhead, str))
				return (close(fd), free_t_char(head), free_t_line(lhead), NULL);
			free_t_char(head);
			head = NULL;
		}
		else
			add_char_in_lst(&head, c);
	}
	return (close(fd), lhead);
}
