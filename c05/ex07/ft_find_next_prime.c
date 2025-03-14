/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:50:54 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 14:51:18 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	div;
	int	next_prime;

	if (nb <= 1)
		return (2);
	div = 0;
	while (div != 2)
	{	
		i = 1;
		div = 0;
		next_prime = nb;
		while (i <= next_prime)
		{
			if (next_prime % i == 0)
				div++;
			i++;
		}
		nb++;
	}
	return (next_prime);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n" , ft_find_next_prime(8));
	printf("%d\n" , ft_find_next_prime(0));
	printf("%d\n" , ft_find_next_prime(-5));
	printf("%d\n" , ft_find_next_prime(89));
	printf("%d\n" , ft_find_next_prime(95));
	printf("%d\n" , ft_find_next_prime(2));
	return(0);
}*/