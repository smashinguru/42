/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:22:15 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 00:22:19 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 1)
		return (0);
	else
	{
		ft_putstr(av[0]);
		write (1, "\n", 1);
	}
	return (1);
}
