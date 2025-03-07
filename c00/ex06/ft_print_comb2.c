/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:41:56 by ruliu             #+#    #+#             */
/*   Updated: 2025/02/27 13:44:26 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(char a[], char b[])
{
	write (1, a, 2);
	write (1, " ", 1);
	write (1, b, 2);
	if (!(a[0] == '9' && a[1] == '8'))
		write (1, ", ", 2);
}

void	ft_gen_pairs(char a[])
{
	char	b[2];

	b[0] = a[0];
	b[1] = a[1] + 1;
	while (b[0] <= '9')
	{
		while (b[1] <= '9')
		{
			ft_print_nbr(a, b);
			b[1]++;
		}
		b[0]++;
		b[1] = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a[2];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			ft_gen_pairs(a);
			a[1]++;
		}
		a[0]++;
		a[1] = '0';
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/	
