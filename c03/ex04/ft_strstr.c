/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 03:06:14 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/09 20:41:56 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}
/*
#include <unistd.h>
void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, str++, 1);
	}
}

int	main(void)
{
	char	str[20] = "ABCabc123";
	char	*to_find = "c123";
	char	*res = ft_strstr(str, to_find);

	ft_putstr(res);
	return (0);
}*/
