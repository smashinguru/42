/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:58:18 by vafavard          #+#    #+#             */
/*   Updated: 2025/03/09 23:28:45 by admoufle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <struct.h>
#include <rush02.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *addr, size_t size, char c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = addr;
	while (i < size)
		ptr[i++] = c;
	return (addr);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

void	free_t_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < 5)
		free_wp_lst(dict[i++]);
}

void	*get_function(char *str)
{
	if (is_period(str))
		return (num_size);
	else if (is_unit(str))
		return (unit_size);
	else if (is_dozen(str))
		return (dozen_size);
	else if (is_teen(str))
		return (teen_size);
	else if (is_hundred(str))
		return (hundred_size);
	return (NULL);
}

t_index	get_head(void *ptr)
{
	if (ptr == num_size)
		return (period_index);
	if (ptr == teen_size)
		return (teen_index);
	if (ptr == dozen_size)
		return (dozen_index);
	if (ptr == unit_size)
		return (unit_index);
	if (ptr == hundred_size)
		return (hundred_index);
	return (error);
}
