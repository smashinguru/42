/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:22:48 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 17:22:58 by ruliu            ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i != 1)
	{
		ft_putstr(argv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (1);
}
